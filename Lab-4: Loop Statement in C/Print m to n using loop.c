//program to print number from m to n
#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (m <= n)
    {
        printf("%d\n", m);
        m++;
    }

    return 0;
}
