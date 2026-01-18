
#include <stdio.h>

int main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr, i;
    
    ptr = &a[0];
    for(i = 0; i < 10; i++){
        printf("%d \n", *ptr);
        ptr++;
    }
    
    return 0;
}