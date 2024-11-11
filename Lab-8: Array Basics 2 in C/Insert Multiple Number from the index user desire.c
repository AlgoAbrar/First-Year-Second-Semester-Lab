#include <stdio.h>
//hw: insert multiple number where user want (lab)

int main() {
    int n;
    scanf("%d", &n);
    int a[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ind, m;
    printf("Enter index: ");
    scanf("%d", &ind);
    printf("Enter number of values: ");
    scanf("%d", &m);
ind=ind-1; //for position and keep ind for index
    int l[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &l[i]);
    }

    // Shift elements
    for (int i = n - 1; i >= ind; i--) {
        a[i + m] = a[i];
    }
    // Insert new values
    for (int i = 0; i < m; i++) {
        a[ind + i] = l[i];
    }
    n += m;

    printf("New array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
