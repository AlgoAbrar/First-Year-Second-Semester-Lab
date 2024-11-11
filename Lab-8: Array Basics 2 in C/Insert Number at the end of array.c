#include<stdio.h>
//insertion at the end of array (lab)
int main()
{
int lnt,x;
scanf("%d", &lnt);
scanf("%d",&x);
int a[lnt+x];
for(int i=0; i<lnt;i++)
{
scanf("%d", &a[i]);

}
for(int i=lnt;i<lnt+x;i++)
{
    scanf("%d", &a[i]);
    
}

for(int i=0;i<lnt+x;i++)
{
    printf("%d ",a[i]);
}
return 0;
}