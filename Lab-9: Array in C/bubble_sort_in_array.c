#include <stdio.h>

int main() {
    int sz;
    printf("Enter the number of elements: ");
    scanf("%d", &sz);

    if (sz <= 0) {
        printf("Array size must not be zero.\n");
        return 1; 
    }

    int arr[sz]; 
    printf("Enter %d elements:\n", sz);
    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < sz - 1; i++) 
    {
        int swap = 0;
        for (int j = 0; j < sz - i - 1; j++) 
        {   
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1; 
            }
        }

        if (swap == 0) {
            break;
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}