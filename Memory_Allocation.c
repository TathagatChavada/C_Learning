// Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>


int main() 
{

    int* ptr, n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int* ) malloc(n * sizeof(int));

    if (ptr == NULL){
        printf("Error! memory not allocated");
        exit(0);
    }


    printf("Enter the Elements to calculate their sum: ");
    for (i = 0; i<n; i++){

        scanf("%d", ptr + i);
        sum += *(ptr + i);

    }

    printf("\n");
    printf("Sum of numbers = %d", sum);
    free(ptr);

}