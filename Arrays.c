#include <stdio.h>

int calculateSum(int arr1[]);


int main() 
{

    int result, arr1[] = {10,23,456,234};

    result = calculateSum(arr1);
    printf("%d", result);

    return 0;
}


int calculateSum(int arr1[]) 
{
    int sum = 0.0;

    for (int i = 0; i < 4; i++){
        sum += arr1[i];
    }

    return sum;
}