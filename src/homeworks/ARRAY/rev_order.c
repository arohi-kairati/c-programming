//To reverse the order of words


#include<stdio.h>
#include<string.h>



#include<stdio.h>

int main()
{
    int n = 0, word_st = 0;
    char str[] = "I am Arohi Kairati";
    int l = strlen(str);
    char word[l];
    char rev_of_str[l];
    for(int i = l-1; i >= 0; i--)
    {
        rev_of_str[n] = str[i];
        n++;
        //printf("%c", rev_of_str[n]);
    }

    for(int i = 0; i < l; i++)
    {
        if(rev_of_str[i] != ' ')
        {
            word[i] =  rev_of_str[i];
            
        }
        
        if(rev_of_str[i] == ' ')
        {
            for(int j = i-1; j >= word_st; j--)
            {
                 printf("%c", word[j]);
            }
            printf(" ");
            for(int j = word_st; j < i; j++)
            {
                word[j] = 0;
            }
            word_st = i+1;
        }
    }
    for(int i = l-1; i >= word_st; i--)
    {
        printf("%c", rev_of_str[i]);
    }
    printf("\n");
    return 0;
}
