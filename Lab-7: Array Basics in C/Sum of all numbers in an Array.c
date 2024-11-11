//print total sum of all number in array
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("Sum of all numbers in array: %d\n", sum);

    return 0;
}
