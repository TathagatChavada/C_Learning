#include <stdio.h>

int main()
{
    int arr[5] = {2,1,5,3,4};

    int steps = 3;
    int length = sizeof(arr)/sizeof(int);

    for (int i = 0; i < steps; i++)
    {
        for (int j = 0; j<(length); j++)
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;  
        }
    }

    printf("Array after rotating counter-clockwise %d times:-\n", steps);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}