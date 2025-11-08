//DECRYPTION of keypad code.

#include<stdio.h>
#include<string.h>

int main()
{
    char d[][4] = {{' '}, {'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'}};
    char msg[] = "2177716661441444101551214441777121814441";
    int c = 0;
    int l = strlen(msg);
    for(int i = 0; i< l; i++)
    {
        if(msg[i] == '1')
        {
            continue;
        }

        if(msg[i] == '0')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            for(int k = 0; k < c + 1; k++)
            {
                printf(" ");
            }
            c = 0;
        }

        if(msg[i] == '2')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[1][c]);
            c = 0;
        }

        if(msg[i] == '3')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[2][c]);
            c = 0;
        }

        if(msg[i] == '4')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[3][c]);
            c = 0;
        }

        if(msg[i] == '5')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[4][c]);
            c = 0;
        }

        if(msg[i] == '6')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[5][c]);
            c = 0;
        }

        if(msg[i] == '7')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[6][c]);
            c = 0;
        }

        if(msg[i] == '8')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[7][c]);
            c = 0;
        }

        if(msg[i] == '9')
        {
            for(int j = i; j < l; j++)
            {
                if(msg[j] == msg[j+1])
                {
                    
                    c++;
                }
                if(msg[j+1] == '1')
                {
                    break;
                }
            }
            i = i + c + 1;
            printf("%c", d[8][c]);
            c = 0;
        }
    }
    return 0;
}