//ENCRYPTION of letters to keypad numbers.

#include<stdio.h>
#include<string.h>

int main()
{
    char msg[] = "I LOVE BLUE";
    int l = strlen(msg);
    for(int i = 0; i < l; i++)
    {
        if(msg[i] == 'A' || msg[i] == 'B' || msg[i] == 'c')
        {
            for(int j = 0; j < msg[i]-64; j++)
            {
                printf("2");
            }
            printf("1");
        }
        
        if(msg[i] == 'D' || msg[i] == 'E' || msg[i] == 'F')
        {
            for(int j = 0; j < msg[i]-67; j++)
            {
                printf("3");
            }
            printf("1");
        }

        if(msg[i] == 'G' || msg[i] == 'H' || msg[i] == 'I')
        {
            for(int j = 0; j < msg[i]-70; j++)
            {
                printf("4");
            }
            printf("1");
        }

        if(msg[i] == 'J' || msg[i] == 'K' || msg[i] == 'L')
        {
            for(int j = 0; j < msg[i]-73; j++)
            {
                printf("5");
            }
            printf("1");
        }

        if(msg[i] == 'M' || msg[i] == 'N' || msg[i] == 'O')
        {
            for(int j = 0; j < msg[i]-76; j++)
            {
                printf("6");
            }
            printf("1");
        }

        if(msg[i] == 'P' || msg[i] == 'Q' || msg[i] == 'R' || msg[i] == 's')
        {
            for(int j = 0; j < msg[i]-79; j++)
            {
                printf("7");
            }
            printf("1");
        }

        if(msg[i] == 'T' || msg[i] == 'U' || msg[i] == 'V')
        {
            for(int j = 0; j < msg[i]-83; j++)
            {
                printf("8");
            }
            printf("1");
        }

        if(msg[i] == 'W' || msg[i] == 'X' || msg[i] == 'Y' || msg[i] == 'Z')
        {
            for(int j = 0; j < msg[i]-86; j++)
            {
                printf("9");
            }
            printf("1");
        }

        if(msg[i] == ' ')
        {
            printf("0");
            printf("1");
        }
    }
    printf("\n");
    return 0;
}