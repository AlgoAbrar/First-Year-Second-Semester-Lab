//compare 2 numbers
#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    if(a>b)
    {
        printf("a is greater than b\n");
    }
    else if (b>a)
    {
        printf("b is greater than a\n");
    }
    else
    {
        printf("both is equal\n");
    }
    return 0;
}
