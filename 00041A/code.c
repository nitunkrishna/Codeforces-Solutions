#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], t[101];
    scanf("%s %s", s, t);
    int m=strlen(s), n=strlen(t);
    int i, j, cnt=0;
    if(m==n)
    {
        for(i=0, j=n-1; i<m; i++, j--)
    {
        if(s[i]!=t[j]) cnt++;
    }
    if(cnt==0) printf("YES\n");
    else printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}