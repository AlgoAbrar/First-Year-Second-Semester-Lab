#include <stdio.h>
//insertion at the beginning of array
int main() {
    int n, new;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &new);
    // for (int i = n; i > 0; i--) //another approach
    // {
    //     a[i] = a[i - 1];
    // }
     for (int i = n-1; i >= 0; i--) 
    {
        a[i+1] = a[i];
    }
    a[0] = new;
    //n++;
    for (int i = 0; i < n+1; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}
