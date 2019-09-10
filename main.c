#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int k, y = 0;
    char s[100];
    printf("Enter a string :- ");
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++)
    {
        k = (int)s[i];
        if(k>=65 && k<=90)
        {
            s[i] = (char)(k+32);
        }
    }
    for(int l = 0; l < strlen(s); l++)
    {
        char t[100];
        int x = y;
        while(s[l] == s[y])
        {
            t[y] = s[l];
            ++y;
        }
        printf("%c%d", t[l], y-x);
        l = y;
    }
    return 0;
}
