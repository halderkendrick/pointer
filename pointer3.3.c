
#include <stdio.h>

int main() {
    int x = 10, y = 20, division;
    int *ptr1, *ptr2;

    ptr1 = &x;
    printf("x = %d \n", *ptr1);

    ptr2 = &y;
    printf("y = %d \n", *ptr2);
    
    division = *ptr2 / *ptr1;
    printf("division = %d \n", division);

    //getch();
    
    return 0;
}