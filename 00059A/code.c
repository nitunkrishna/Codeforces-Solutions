#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int upper=0, lower=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isupper(str[i])) upper++;
        else lower++;
    }
    if(upper>lower)
    {
        for(int i=0; str[i]!='\0'; i++)
            str[i]=toupper(str[i]);
    }
    else
    {
        for(int i=0; str[i]!='\0'; i++)
            str[i]=tolower(str[i]);
    }
    printf("%s\n", str);
    return 0;
}