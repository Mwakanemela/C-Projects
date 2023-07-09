//typedef = gives an existing datatype a nickname
#include <stdio.h>
#include <string.h>

typedef struct User
{
    /* data */
    char name[25];
    char password[25];
    int id;
}user;

int main()
{
    user user1 = {"Mwakanemela", "1234", 1234};
    user user2 = {"Kayange", "4321", 4321};
    
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    
}