#include <stdio.h>

void passByAddress(int* x, int* y)
{
    int z = *x;
    *x = *y;
    *y = z;
}


int main ()
{
    int a = 30;
    int b = 20;

    printf("Before Swapping: \nA: %d\nB: %d\n", a,b);

    passByAddress(&a, &b);

    printf("After Swapping: \nA: %d\nB: %d", a,b);

    // double* ptrSalary, salary;

    // printf("Enter your salary: ");
    // scanf("%lf", &salary);

    // ptrSalary = &salary;

    // printf("Your salary is: %.2lf",*ptrSalary);
    // printf("\n");
    // *ptrSalary = salary * 2;

    // printf("The two times of your salary is: %.2lf", *ptrSalary);
  
    // return 0;

}

