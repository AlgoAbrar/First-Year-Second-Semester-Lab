#include <stdio.h>

int main() 
{
    int sz, tgt, cnt = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &sz);

    if (sz <= 0) {
        printf("Array size must be greater than zero.\n");
        return 1; 
    }

    int arr[sz]; 

    printf("Enter %d elements:\n", sz);
    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count its frequency: ");
    scanf("%d", &tgt);

    for (int i = 0; i < sz; i++) {
        if (arr[i] == tgt) {
            cnt++; 
        }
    }

    printf("The element appears %d times.\n", cnt);

    return 0;
}