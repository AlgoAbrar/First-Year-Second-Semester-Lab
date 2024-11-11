#include <stdio.h>
int main()
{
    int sz;
    printf("Enter the number of elements: ");
    scanf("%d", &sz);
    int arr[sz];
    printf("Enter %d elements:\n", sz);
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }

    int large, large2;
    if (arr[0] > arr[1])
    {
        large = arr[0];
        large2 = arr[1];
    }
    else
    {
        large = arr[1];
        large2 = arr[0];
    }
    for (int i = 2; i < sz; i++)
    {
        if (arr[i] > large)
        {
            large2 = large;
            large = arr[i];
        }
        else if (arr[i] > large2 && arr[i] != large)
        {
            large2 = arr[i];
        }
    }
    if (large == large2)
    {
        printf("There is no second largest number.\n");
    }
    else
    {
        printf("second largest number is: %d\n", large2);
    }

    return 0;
}