#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1001];
    scanf("%s", str);
    int n=strlen(str);
    printf("%c", toupper(str[0]));
    for(int i=1; i<n; i++)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}