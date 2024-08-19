//write a program to calculate Perimeter of a Rectangle
#include<stdio.h>
#include<math.h>
int main()
{
    float Length, Width, Perimeter;
    printf("Enter the value of Length: ");
    scanf("%f",&Length);
    printf("Enter the value of Width: ");
    scanf("%f",&Width);
    Perimeter= 2*(Length+Width);
    printf("\nPerimeter of the Rectangle is: %f", Perimeter);
    return 0;
}
