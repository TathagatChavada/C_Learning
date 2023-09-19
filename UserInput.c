#include <stdio.h>

int main() {

    // Single User Input
    // int num;

    // printf("Enter a number:"); 
    // scanf("%d", &num);

    // printf("Entered number is: %d", num);



    // Multiple User Input
    // int myNum;
    // char myChar;

    // printf("Type a number and a character: ");
    // scanf("%d %c", &myNum, &myChar);

    // printf("Entered numbr is: %d\n", myNum);
    // printf("Entered numbr is: %c\n", myChar);



    // Take String Input
    char fullName[20];
    printf("Enter your name: ");

    // scanf("%s", fullName); // No need to add "&" symbol in this case
    fgets(fullName, sizeof(fullName), stdin); // when we have more than one words
    printf("Entered name is: %s", fullName);

    return 0;
}   