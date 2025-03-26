#include <stdio.h>
double PI=3.1416;

int main() {
    int d;
    scanf("%d", &d);

    double area = (PI * d * d) / 4.0;

    printf("%.2lf\n", area);
    
    return 0;
}
