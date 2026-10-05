#include<stdio.h>
#include<string.h>
#include<ctype.h>

char sout(str[]);

int main()
{
    char str[101];
    scanf("%s", str);
    int n=strlen(str);
    if(isupper(str)) sout(str);
    else if(islower(str[0]))
    printf("%s\n", str);
    return 0;
}

char sout(str[])
{
    for(int i=1; i<n; i++)
    {
        if(isupper(str[i])) printf("%c", tolower(str[i]));
        else if(islower(str[i])) printf("%c", str[i]);
    }
}