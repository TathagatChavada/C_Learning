#include <stdio.h>
#include <string.h>

int main() {

    // char arrayChar[] = "Hello World";
    // printf("Length of string is: %d \n",strlen(arrayChar));
    // printf("Size of an array in byte is: %d",sizeof(arrayChar));



    // char str1[] = "Hello ";
    // char str2[] = "World";
    // char str3[15];

    // strcpy(str3,str1);
    // strcat(str1, str2);
    // printf("%s \n", str1);
    // printf("%s \n", str3);
    // printf("%d \n", strcmp(str1, str2) );



    // char name[30];
    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);

    // printf("Name: ");
    // puts(name);


    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);

    if (strcmp(name, "John") == 0)
    {
        printf("Login Successfull");
        printf("User Name is: %s", name);
    }

    else
    {
        printf("Name is Incorrect.");
    }
    


    return 0;
}