
#include <stdio.h>

int main() {
    int x = 10, y = 20, product;
    int *ptr1, *ptr2;

    ptr1 = &x;
    printf("x = %d \n", *ptr1);

    ptr2 = &y;
    printf("y = %d \n", *ptr2);
    
    product = *ptr2 * *ptr1;
    printf("product = %d \n", product);

    //getch();
    
    return 0;
}