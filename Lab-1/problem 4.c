//write a program to add three integer numbers and display their sum
#include<stdio.h>
int main()
{
    int a,b,c,sum;

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    sum=a+b+c;
    printf("the sum of two integer is: " "%d",sum);
    return 0;
}

