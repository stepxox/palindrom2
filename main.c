#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
typedef int Bool;

Bool palindrom(char str[])
{
    int vlevo = 0;
    int vpravo = strlen(str)-1;
    while (vlevo<vpravo)
    {
        if(str[vlevo] != str[vpravo])
            return FALSE;
        vlevo++;
        vpravo--;
    }
    return TRUE;
}

int main(void)
{
    char string[1000], ch;
    int x = 0;


    while((ch = getchar()) != '\n'){
        if (!isspace(ch) && !ispunct(ch))
        {
            string[x] = tolower(ch);
            x++;
        }
    }

    string[x] = '\0';
    if(palindrom(string))
        printf("%s", string);
    else
        printf("Error\n");

    return 0;
}
