#include <stdio.h>

int main()
{
    int num1, num2, gcd = 1,min;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}

