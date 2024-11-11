#include <stdio.h>
//insertion at the beginning of array by taking input (lab)
int main() {
    int n,b;
    scanf("%d %d", &n,&b);
    int a[n+b];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
      for (int i = n-1; i >= 0; i--) 
    {
        a[i+b] = a[i];
    }
   for(int i=0;i<b;i++)
    {scanf("%d", &a[i]);}

    for (int i = 0; i < n+b; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}
