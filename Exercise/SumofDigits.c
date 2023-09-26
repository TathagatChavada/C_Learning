#include <stdio.h>

int main() 
{
    int number, sum, digit;
    sum = 0;
    
    printf("Enter a positive number: ");
    scanf("%d", &number);


    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of the digits of the number %d is: %d", number, sum);
}