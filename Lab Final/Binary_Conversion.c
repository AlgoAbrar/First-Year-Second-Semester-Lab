#include <stdio.h>
int main() {
    long long n;
    
    scanf("%lld", &n);
    
    char binary[50];
    int index = 0;
   
    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n /= 2;
    }
    

    for (int i = index - 1; i >= 0; i--) {
        putchar(binary[i]);
    }
    
    printf("\n");
    return 0;
}
