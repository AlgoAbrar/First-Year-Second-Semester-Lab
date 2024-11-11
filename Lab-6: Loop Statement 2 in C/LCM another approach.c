#include <stdio.h>

int main() {
    int num1, num2, lcm, max;

    //Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    //Find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        ++max;
    }

    // Output the result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
