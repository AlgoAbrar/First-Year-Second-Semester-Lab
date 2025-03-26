#include <stdio.h>
#include <math.h>

int main() {
    int m, n, count = 0;
    scanf("%d %d", &m, &n);

    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    for (int i = m; i <= n; i++) {
        if (i < 2) continue;

        int prime = 1;
        if (i % 2 == 0 && i != 2) {
            prime = 0;
        } else {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime) count++;
    }

    printf("%d\n", count);
    return 0;
}
