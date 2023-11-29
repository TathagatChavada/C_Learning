#include <stdio.h>

int greatestCommonDivisor(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
    
}

int recursiveGCD(int x, int y)
{
    if (y == 0 )
    {
        return x; 
    }

    else
    {
        int temp = y;
        y = x % y;
        x = temp;

        recursiveGCD(x, y);
    }
    
}

int main()
{

    int a = 123;
    int b = 36;

    if ( a>=b)
    {
        // int result = greatestCommonDivisor(a,b);
        int result = recursiveGCD(a,b);
        printf("GCD of %d & %d is: %d",a, b, result);
    }
    else
    {
        // int result = greatestCommonDivisor(b,a);
        // printf("GCD of %d & %d is: %d",a, b, result);
    }
    

    return 0;
}