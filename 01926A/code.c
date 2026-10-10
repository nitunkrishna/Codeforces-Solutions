#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        char str[10];
        scanf("%s", str);
        int n=strlen(str);
        int A=0, B=0;
        for(int j=0; j<n; j++)
        {
            if(str[j]=='A') A++;
            else B++;
        }
        if(A>B) printf("A\n");
        else printf("B\n");
    }
    return 0;
}