//Write a program that will take input of days and.
//show number of years, month, week, days.
#include<stdio.h>
int main()
{
    int days, year, month, week, remdays;

    printf("Enter the number of days: ");
    scanf("%d",&days);

    year= days/365;
    days%= 365;

    month=days/30;
    days%= 30;

    week=days/7;
    days%=7;

    remdays= days%=7;

    printf("Year: %d\n",year);
    printf("Month: %d\n", month);
    printf("Week: %d\n",week);
    printf("Remaining Days: %d\n", remdays);

    return 0;
}
