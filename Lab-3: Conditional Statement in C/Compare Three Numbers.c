// compare 3 numbers
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);
    printf("Enter number 3: ");
    scanf("%f", &c);

    if (a == b && b == c)
    {
        printf("All three numbers are equal\n");
    }
    else if (a >= b && a >= c)
    {
        printf("The largest number is %f\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest number is %f\n", b);
    }
    else
    {
        printf("The largest number is %f\n", c);
    }

    return 0;
}
