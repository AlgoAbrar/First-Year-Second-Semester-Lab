#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;


    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));


    printf("The area of the triangle is: %f\n", area);

    return 0;
}

