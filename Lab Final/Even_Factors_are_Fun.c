#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            printf("%d %d\n", i, i % 2 == 0);
        
            if (i != N / i) {
                printf("%d %d\n", N / i, (N / i) % 2 == 0);
            }
        }
    }

    return 0;
}
