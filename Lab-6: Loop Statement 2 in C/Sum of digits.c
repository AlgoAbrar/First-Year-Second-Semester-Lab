//sum of digits of a number
#include <stdio.h>
#include <ctype.h>
int main()
{
    int number, temp, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum = remainder + sum;
        temp = temp / 10;
    }
    printf("The sum of the digits is: %d", sum);

    return 0;
}
