#include <stdio.h>

int main() {
    int sz;
    printf("Enter the size array: ");
    scanf("%d", &sz);
    if (sz <= 0) {
        printf("Array size not valid.\n");
        return 1;
    }

    int arr[sz];
    printf("Enter elements:\n");
    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < sz; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}