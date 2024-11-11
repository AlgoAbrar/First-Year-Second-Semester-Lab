#include <stdio.h>

int main() {
    int num1, num2, temp1, temp2, gcd, lcm;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp1 = num1;
    temp2 = num2;

    //Euclidean algorithm
    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    gcd = temp1;

    //lcm
    lcm = (num1 * num2) / gcd;

    //result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
