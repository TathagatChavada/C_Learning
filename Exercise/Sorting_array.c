#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {6,7,8};
    int new_array[8];
    int index = 5;
    int i = 0; int j = 0;int k = 0;

    int l1 = sizeof(arr1)/sizeof(int);
    int l2 = sizeof(arr2)/sizeof(int);

    while (i < l1 && j < l2)
    {
        if (arr1[i] <= arr2[j]){
            new_array[k] = arr1[i];
            i += 1;
        }

        else
        {
            new_array[k] = arr2[j];
            j += 1;
        }

        k += 1;
    }

    while (i < l1)
    {
        new_array[k] = arr1[i];
        i += 1;
        k += 1;
    }

    while (j < l2)
    {
        new_array[k] = arr2[j];
        j += 1;
        k += 1;
    }

    int l3 = sizeof(new_array)/sizeof(int);  
    for (int i = 0; i < l3; i++)
    {
        printf("%d ", new_array[i]);
    }

    printf("\n");printf("\n");
    printf("Element at index %d in the new array is: %d", index, new_array[index]);
    return 0;
}