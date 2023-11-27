#include <stdio.h>

int square(int *a)
{
    return (*a)*(*a);
}

int main()
{

    int (*fptr)(int *);

    fptr = square;

    int num = 4;

    int squared_num = fptr(&num);
    // int squared_num2 = (*fptr)(4);

    printf("Squared number is: %d", squared_num);

    return 0;
}