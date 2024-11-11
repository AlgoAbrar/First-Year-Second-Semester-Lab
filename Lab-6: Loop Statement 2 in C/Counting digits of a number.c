//Find Digits of a given number
#include<stdio.h>
int main()
{
while(1){ //while loop is used for continous output checking. you can remove this
    int num,count=0;
    printf("Enter any integer: ");
    scanf("%d", &num);
    while(num!=0)
    {
        num=num/10;
        ++count;
 }
 printf("Total Number of Digits: %d\n", count);
}
}
