#include <stdio.h>
int main() {
    int num, temp, digit, fact, sum, i;
    
    scanf("%d", &num);

    while (1) {  
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            fact = 1;

            for (i = 1; i <= digit; i++) {
                fact *= i;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
            break;
        }

        num++;
    }

    return 0;
}
