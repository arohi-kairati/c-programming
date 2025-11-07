// To print Namaste if a user is indian and print Bonjour if a user is french

#include<stdio.h>

void Namaste();
void Bonjour();

int main()
{
    char nation;
    printf("Enter i if you are Indian and enter f if you are french.\n");
    scanf("%c", &nation);
    if(nation == 'i')
    {
        Namaste();
    }
    else if(nation == 'f')
    {
        Bonjour();
    }
    return 0;
}


void Namaste()
{
    printf("Namaste\n");
}

void Bonjour()
{
    printf("Bonjour\n");
}