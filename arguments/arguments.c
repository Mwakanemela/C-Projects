#include <stdio.h>
#include <string.h>

void birthday(char name[], int age)//taking parameters
{
    printf("Happy birthday %s\n", name);
    printf("You are %d years old", age);
}

int main()
{
    char name[30];
    int age;

    printf("What is your name? : ");
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';
    printf("How old are you? : "); 
    scanf("%d", &age);

    birthday(name, age); //passing arguments

    return 0;

}