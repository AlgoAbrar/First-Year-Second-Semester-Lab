//Write a program that will show area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter Three Line's length of a Triangle: ");
    scanf("%f %f %f", &a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle is: %f",area);
    return 0;
}
