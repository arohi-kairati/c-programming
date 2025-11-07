#include<stdio.h>
#include<string.h>

int main()
{
    char names[5][8] = {"Arohi", "Shivangi", "Anjali", "Akansha", "Omni"};
    char c[8];
    for(int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(names[i][0] > names[j][0])
            {
                strcpy(c, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], c);
            }
            else if(names[i][0] == names[j][0])
            {
                
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            printf("%c", names[i][j]);
        printf(" ");0
    }
}