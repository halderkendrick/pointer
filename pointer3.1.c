
#include <stdio.h>

int main() {
    int x = 10, y = 20, sub;
    int *ptr1, *ptr2;

    ptr1 = &x;
    printf("x = %d \n", *ptr1);

    ptr2 = &y;
    printf("y = %d \n", *ptr2);
    
    sub = *ptr2 - *ptr1;
    printf("sub = %d \n", sub);

    //getch();
    
    return 0;
}