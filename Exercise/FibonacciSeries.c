#include <stdio.h>

int main()
{
    int first, second, third, n, i;

    first = 0;
    second = 1;

    printf("Enter the number of terms you want in Fibonacci Series: ");
    scanf("%d", &n);

    for (i = 1; i<=n; i++)
    {
        third = first + second;
        first = second;
        second = third;
        printf(" %d", third);
    }

}