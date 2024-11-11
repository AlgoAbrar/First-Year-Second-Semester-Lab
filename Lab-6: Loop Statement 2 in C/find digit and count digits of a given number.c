#include <stdio.h>

int main()
{
    int number, a, digit, count = 0, total = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &number);

    a = number;

    printf("Enter a digit (0-9) to count: ");
    scanf("%d", &digit);

    /*if(digit < 0 || digit > 9) {
        printf("Invalid digit! Please enter a digit between 0 and 9.\n");
        return 1;
    }*/
    while (number != 0)
    {
        rem = number % 10;
        if (rem == digit)
        {
            count++;
        }
        total++;
        number = number / 10;
    }

    printf("The digit %d appears %d times in the number.\n", digit, count);
    printf("The number %d has %d digits.\n", a, total);

    return 0;
}
