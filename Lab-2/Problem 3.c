//write a program using math built in library in 1 program
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,power, ceilling, root, Floor;
    printf("Enter the number and base: ");
    scanf("%f %f",&a,&b);
    printf("Enter the number for Ceil: ");
    scanf("%f",&c);
    printf("Enter the number for Floor: ");
    scanf("%f",&d);
    printf("Enter the number for Root: ");
    scanf("%f", &e);

power= pow(b,a);
ceilling= ceil(c);
Floor= floor(d);
root= sqrt(e);
printf("\nThe Power of the Number is: %f\n",power);
printf("The Ceil of the Number is: %f\n",ceilling);
printf("The Floor of the Number is: %f\n",Floor);
printf("The Root of the Number is: %f\n",root);

    return 0;
}
