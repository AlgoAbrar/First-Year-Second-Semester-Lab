//Find GCD of two given numbers.
#include <stdio.h>
int main()
{
    int num1, num2,min;
    int i, gcd;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //divisors of num1
    /*printf("\nDivisors of %d are: ", num1);
    for (i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            printf("%d ", i);
        }
    }

    //divisors of num2
    printf("\nDivisors of %d are: ", num2);
    for (i = 1; i <= num2; i++)
    {
        if (num2 % i == 0)
        {
            printf("%d ", i);
        }
    }*/

    //common divisors
    printf("\nCommon divisors of %d and %d are: ", num1, num2);
    //for (i = 1; i <= (num1 < num2 ? num1 : num2); i++)
        for (i = (num1 < num2 ? num1 : num2); i >=1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d ", i);
        }
    }
    //GCD
   min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    printf("\nGreatest Common Divisor of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
