#include <stdio.h>
#include <string.h>

struct Player
{
    /* data */
    char name[25];
    int score;
};

void getPlayerDetails(char name[], int score)
{

}
int main()
{
    struct Player player1;
    struct Player player2;

    char name[25];
    int score;
    printf("Enter player name? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter score? : ");
    scanf("%d", &score);

    strcpy(player1.name, name);
    player1.score = score;
    
    scanf("%c");

    printf("Enter player name? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter score? : ");
    scanf("%d", &score);
    
    strcpy(player2.name, name);
    player2.score = score;
    
    printf("Player name : %s", player1.name);
    printf("\tPlayer score : %d\n", player1.score);
    printf("Player name : %s", player2.name);
    printf("\tPlayer score : %d", player2.score);
    


    //getPlayerDetails(name, score);   
}