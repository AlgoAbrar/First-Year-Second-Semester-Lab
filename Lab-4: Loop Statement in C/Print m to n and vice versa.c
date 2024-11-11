//print m to n from low to high and vice versa
#include <stdio.h>

int main() {
    int m=15, n=10;

   /* printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);
*/

    if (m <= n) {

        while (m <= n) {
            printf("%d\n", m);
            m++;
        }
    }
    else
        {

        while (m >= n) {
            printf("%d\n", m);
            m--;
        }
    }

    return 0;
}
