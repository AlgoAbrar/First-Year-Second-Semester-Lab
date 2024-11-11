//Count even and odd numbers by taking input
#include <stdio.h>

int main() {
    int m, n,even = 0, odd = 0;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = m; i <= n; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers count between %d and %d: %d\n", m, n, even);
    printf("Odd numbers count between %d and %d: %d\n", m, n, odd);

    return 0;
}
