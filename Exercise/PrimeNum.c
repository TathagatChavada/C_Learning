#include <stdio.h>

int isPrimeNumber(int num)
{
    int j;

    if (num <= 1)
    {
        return 0;
    }

    for (j = 2; j<num; j++) 
    {
        if (num%j == 0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    int i, start, end;

    printf("Enter starting range (start>2): ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("Prime Numbers are: ");
    printf("\n");
    
    for (i = start; i < end; i++)
    {
        if (isPrimeNumber(i))
        {
            printf("%d", i);
            printf("\n");
        }
    }

    return 0;
}