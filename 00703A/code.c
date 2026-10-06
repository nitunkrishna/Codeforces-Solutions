#include<stdio.h>
int main()
{
    int n, m, c, mishika=0, chris=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &m, &c);
        if(m>c) mishika++;
        else if(c>m) chris++;
    }
    if(mishika>chris) printf("Mishka\n");
    else if(chris>mishika) printf("Chris\n");
    else printf("Friendship is magic!^^\n");
    return 0;
}