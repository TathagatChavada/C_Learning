#include <stdio.h>

// Address of an array is same as the address of first array element.
// This is because address of an array always points to the first element.

int main()
{
    // int x[6], sum = 0;

    // printf("Enter 6 numbers: ");
    

    // for(int i = 0; i < 6; i++) {

    //     scanf("%d", x+i);

    //     sum += *(x+i);
    // }

    // printf("Sum of numbers in array: %d", sum);

    int y[4], i;

    for (i = 0; i<4; i++){
        printf("&y[%d] = %p\n", i, y+i);
    }

    printf("Address of array y is: %p",y);

    return 0;
}