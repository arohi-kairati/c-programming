//WAP to count a word in a sentence.

#include<stdio.h>
#include<string.h>

int main()
{
    char sent[] = "My name is Arohi Kairati . My mother's name is Rekha Kairati .";
    char w[20];
    int size, len, count = 0;
    len = strlen(sent);
    

    //taking input
    printf("Enter the word you want to count.\n");
    scanf("%s", w);

    // counting no. of words
    int n_of_wrds = 1;
    for(int k = 0; k < len; k++)
    {
        if(sent[k] == ' ')
        {
            n_of_wrds++;
        }
    }


    // storing the strin into a 2D array
    char words[n_of_wrds][20];
    int m = 0, i = 0;
    for(int j = 0; j <= len; j++)
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



    // finding the word and counting its frequency.
    size = sizeof(words) / sizeof(words[0]);

    for(int j = 0; j < n_of_wrds; j++)
    {
        if(strcmp(w, words[j]) == 0)
        {
            count++;
        }
    }

    printf("The word %s appears %d times in the sentence.\n", w, count);
    
    return 0;
}