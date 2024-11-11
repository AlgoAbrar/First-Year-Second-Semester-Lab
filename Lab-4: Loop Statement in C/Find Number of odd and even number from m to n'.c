//Find even and odd numbers by taking input
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers between %d and %d:\n", m, n);
    for (int i = m; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    printf("\nOdd numbers between %d and %d:\n", m, n);
    for (int i = m; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

