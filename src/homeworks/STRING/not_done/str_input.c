#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the sentence.\n");
    fgets(str, 100, stdin);
    printf("%lu\n", strlen(str));
    printf("%s", str);
    return 0;
}