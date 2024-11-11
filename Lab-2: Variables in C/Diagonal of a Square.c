//Write a program to calculate Diagonal of a Square
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b, Diagonal;
    printf("Enter the value of the length of Square: ");
    scanf("%f",&a);
    Diagonal= (sqrt(2)*a);
    printf("\nDiagonal Length of the Square is: %f unit", Diagonal);
    return 0;
}
