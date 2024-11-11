//For Loop Basic 2
#include<stdio.h>
int main()
{
    while(1)
    {
        int num,count=0,i;
        printf("Enter the number: ");
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("Prime Number\n");
        else
            printf("This is not Prime Number\n");
    }
    return 0;
}
