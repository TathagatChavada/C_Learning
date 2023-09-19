#include <stdio.h>
#include <string.h>


typedef struct Player
{
    char name[15];
    int score;
    
}player;


int main()
{
    player player1, player2;
    
    strcpy(player1.name, "Tathagat");
    player1.score = 10;

    strcpy(player2.name, "Bob");
    player2.score = 5;


    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}