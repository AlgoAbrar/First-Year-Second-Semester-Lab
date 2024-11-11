#include <stdio.h>
int main()
{
    int e, count = 0;
    scanf("%d", &e);
    //loop for the decision of numbers of question
    for (int q = 0; q < e; q++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        //sure about the solution
        if (x + y + z >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
