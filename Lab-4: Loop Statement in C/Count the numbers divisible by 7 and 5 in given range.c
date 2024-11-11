//count if divisible by 5 and 7 in a range by taking input
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0;

    for (int i = m; i <= n; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            count++;
        }
    }

    printf("Numbers divisible by either 5 or 7 between %d and %d: %d\n", m, n, count);

    return 0;
}
