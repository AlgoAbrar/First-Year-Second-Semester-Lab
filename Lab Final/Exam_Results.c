#include <stdio.h>
int main() {
    int m, n, i, j, id, found;
    
    scanf("%d %d", &m, &n);

    int passed[m]; 
    for (i = 0; i < m; i++) {
        scanf("%d", &passed[i]);
    }

    int allPassed = 1;  

    for (i = 0; i < n; i++) {
        scanf("%d", &id);
        found = 0; 

        for (j = 0; j < m; j++) {
            if (passed[j] == id) {
                found = 1;
                break;
            }
        }

        if (!found) {
            allPassed = 0;
        }
    }

    if (allPassed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
