
#include <stdio.h>

int main() {
    int x = 10, y = 20, sum;
    int *ptr1, *ptr2;

    ptr1 = &x;
    printf("x = %d \n", *ptr1);

    ptr2 = &y;
    printf("y = %d \n", *ptr2);
    
    sum = *ptr1 + *ptr2;
    printf("sum = %d \n", sum);

    //getch();
    
    return 0;
}