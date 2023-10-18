#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    int age;
} student;

void displayData(student s);

int main()
{
    student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    displayData(s1);

    return 0;
}

void displayData(student s)
{
    printf("Name of student is: %s", s.name);
    printf("\n");
    printf("Name of student is: %d", s.age);
}