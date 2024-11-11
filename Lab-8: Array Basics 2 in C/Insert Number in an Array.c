#include<stdio.h>
// insert where user want
int main()
{
int n;
    scanf("%d", &n);
    int a[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int ind,val;
scanf("%d %d",&ind, &val); //index and value
n++;
for(int i=n-1;i>=ind;i--)
{
    a[i+1]=a[i];
}
a[ind]=val;
for(int i=0; i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}