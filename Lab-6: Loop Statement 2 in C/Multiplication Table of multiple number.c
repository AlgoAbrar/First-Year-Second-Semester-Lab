#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter the numbers: ");
    scanf("%d",&m);
    printf("enter the numbers: ");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        printf("multiplication table of: %d\n",i);

      for(j=1;j<=10;j++)
      {
          printf("%d x %d= %d\n",i,j,i*j);
      }
    printf("\n");
    }

}
