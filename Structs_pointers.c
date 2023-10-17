#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct PersonDetail
{
    int age;
    int weight;

}personDetail;


typedef struct personInfo
{
    int age;
    float weight;
    char name[30];
}person;


int main()
{
    personDetail *personPtr, person1;
    personPtr = &person1;     //personPtr is pointer to some variable of type struct Person

    printf("Enter your age: ");
    scanf("%d", &(personPtr->age));
    printf("\n");

    printf("Enter your weight: ");
    scanf("%d", &(personPtr->weight));
    printf("\n");

    // personPtr->age == (*personPtr).age
 
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %d", personPtr->weight);


    return 0;

}


// int main() 
// { 
//     person *ptr;
//     int i, n;

//     printf("Enter the number of Person: ");
//     scanf("%d", &n);

//     ptr = (person* ) malloc(n * sizeof(person));

//     for (i=0; i<n; i++){

//         printf("Enter Name & Age respectively: ");
//         scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);

//     }

//     printf("Displaying Information: \n");
//     for (i=0; i<n; i++){
//         printf("Name: %s \t Age: %d \n", (ptr + i)->name, (ptr + i)->age);
//     }
// }