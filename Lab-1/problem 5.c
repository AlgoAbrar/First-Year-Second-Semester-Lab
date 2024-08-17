//write a program to add two floating numbers and display their sum
#include<stdio.h>
int main()
{
    float a,b, sum;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);
    sum=a+b;
    printf("the sum of two floating number is: " "%f",sum);
    return 0;
}

