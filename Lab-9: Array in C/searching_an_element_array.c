#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    int t;
    printf("Enter the element to search: ");
    scanf("%d", &t);

    int fnd = -1;

    for (int i = 0; i < size; i++) {
        if (a[i] == t) {
            fnd = i; 
            break; 
        }
    }

    if (fnd != -1) {
        printf("Element %d position: %d\n",t, fnd+1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}