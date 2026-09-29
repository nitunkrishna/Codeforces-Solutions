#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int fre[26]={0};
    int cnt=0;
    scanf("%s", str);
    int n=strlen(str);
    for(int i=0; i<n; i++)
        fre[str[i]-'a']++;
    for(int i=0; i<26; i++)
        if(fre[i]>0) cnt++;
    if(cnt%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}