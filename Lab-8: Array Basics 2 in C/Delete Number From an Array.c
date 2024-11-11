#include<stdio.h>
//delete from where user want
int main()
{
int lnt;
scanf("%d",&lnt);
int a[lnt];
for(int i=0;i<lnt;i++)
{
    scanf("%d",&a[i]); //array inputer jonno
}
int ind; //variable niye kaj korbo delete er jonno
scanf("%d",&ind);//delete only index nilei hobe
if(ind<0|| ind>=lnt)
{
    printf("Wrong index");
}
for(int i=ind;i<lnt-1;i++) //i=ind+1
{
    a[i]=a[i+1]; //a[i-1]=a[i]
}
lnt--;

for(int i=0; i<lnt;i++)
{
    printf("%d ",a[i]);
}

    return 0;
}