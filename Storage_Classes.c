#include <stdio.h>

void static_var()
{
    static int c = 5;
    c += 5;
    printf("Currently the value of c is(using static variable): %d", c);
    printf("\n");
}

void normal_var()
{
    int a = 2;
    a += 2;
    printf("Currently the value of c is: %d", a);
    printf("\n");

}

int main()
{
    static_var();
    static_var();
    static_var();

    printf("\n");
    printf("\n");

    normal_var();
    normal_var();
    normal_var();
    return 0;
}