#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    int n=strlen(str1);
    for (int i=0; i<n; i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    int x=strcmp(str1, str2);
    if (x<0) printf("-1\n");
    else if (x>0) printf("1\n");
    else printf("0\n");
    return 0;
}