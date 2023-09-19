#include <stdio.h>

int main() {

    int array[5];

    printf("Enter 5 integers: \n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }
    

    printf("\n Elements of array are: \n");
    
    for (int i = 0; i < 5; i++){
        printf("%d \n",array[i]);
    }

    return 0;
}