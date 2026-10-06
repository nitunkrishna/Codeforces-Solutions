#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int x=strlen(str);
    int A=0, D=0;    
    for(int i=0; i<x; i++)
    {
        if(str[i]=='A') A++;
        else D++;
    }
    if(A>D) printf("Anton\n");
    else if(D>A) printf("Danik\n");
    else if(A==D) printf("Friendship\n");
    return 0;
}