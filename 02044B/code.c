#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int j=0; j<t; j++)
    {
        char str[101];
        scanf("%s", str);
        int n=strlen(str);
        for(int i=n; i>=0; i--)
        {
            if(str[i]=='p') printf("q");
            else if(str[i]=='q') printf("p");
            else if(str[i]=='w') printf("w");
        }
        printf("\n");
    }
    return 0;
}