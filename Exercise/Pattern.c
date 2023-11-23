#include <stdio.h>

int main() {

    int rows, i, j;
    char letter = 'A';
    
    printf("Enter the no. of rows you want to print: ");
    scanf("%d", &rows);
    
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}