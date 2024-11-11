//write a program to make a calculator
#include <stdio.h>

int main() {
    int a, b;
    char c;
printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter (+,-,*,/): ");
    scanf(" %ch", &c);

    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else if (c == '*') {
        printf("%d\n", a * b);
    } else if (c == '/') {
        if (b != 0) {
            printf("%d\n", a / b);
        } else {
            printf("Division by zero error\n");
        }
    } else {
        printf("Invalid\n");
    }

    return 0;
}
