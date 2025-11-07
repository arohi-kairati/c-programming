//WAP to find a word and replace it in a string whenever it is found.

#include<stdio.h>
#include<string.h>

int main()
{
    char sent[] = "My name is Arohi Kairati";
    char rep[20], new[20];
    int size, len;
    len = strlen(sent);
    

    //taking input
    printf("Enter the word you want to replace.\n");
    scanf("%s", rep);
    printf("Enter the new word.\n");
    scanf("%s", new);

    // counting no. of words
    int n_of_wrds = 1;
    for(int k = 0; k < len; k++)
    {
        if(sent[k] == ' ')
        {
            n_of_wrds++;
        }
    }


    // storing the string into a 2D array
    char words[n_of_wrds][20];
    int m = 0, i = 0;
    for(int j = 0; j < len; j++)
    {
        if(sent[j] != ' ' && sent[j] != '\0' )
        {
            words[i][m++] = sent[j];
        }
        else
        {
            words[i][m] = '\0';  // end of the word
            i++;
            m = 0;
        }
    }



    // finding the word and replacing it with the new word
    size = sizeof(words) / sizeof(words[0]);

    for(int j = 0; j < n_of_wrds; j++)
    {
        if(strcmp(rep, words[j]) == 0)
        {
            strcpy(words[j], new);
        }
    }


    //printing the new string
    for (int j = 0; j < n_of_wrds; j++) 
    {
        printf("%s ", words[j]);
    }
    printf("\n");
    
    return 0;
}