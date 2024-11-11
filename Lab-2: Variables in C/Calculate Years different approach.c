#include <stdio.h>

int main()
{
    int days, years, months, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days =days-years*365;

    months = days / 30;
    days = days-months*30;

    weeks = days / 7;
    remainingDays = days % 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Remaining days: %d\n", remainingDays);

    return 0;
}
