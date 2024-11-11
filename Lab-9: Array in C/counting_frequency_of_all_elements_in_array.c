#include <stdio.h>
int main()
{
    int sz;
    printf("Enter the number of elements: ");
    scanf("%d", &sz);
    if (sz <= 0)
    {
        printf("Array size must not be zero.\n");
        return 1;
    }
    int arr[sz];
    printf("Enter %d elements:\n", sz);
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt[sz];
    for (int i = 0; i < sz; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < sz; i++)
    {
        if (cnt[i] == 0)
        {
            int count = 1;
            for (int j = i + 1; j < sz; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    cnt[j] = 1;
                }
            }
            printf("Element %d appears %d times.\n", arr[i], count);
        }
    }
    return 0;
}