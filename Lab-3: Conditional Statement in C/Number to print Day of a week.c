//write a C program to input 1-7 to show sunday to saturday
#include <stdio.h>
int main() {
    int day;

    printf("Enter a number to display the day of the week: ");
    scanf("%d", &day);

    if(day == 1) {
        printf("Sunday\n");
    } else if(day == 2) {
        printf("Monday\n");
    } else if(day == 3) {
        printf("Tuesday\n");
    } else if(day == 4) {
        printf("Wednesday\n");
    } else if(day == 5) {
        printf("Thursday\n");
    } else if(day == 6) {
        printf("Friday\n");
    } else if(day == 7) {
        printf("Saturday\n");
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}

