#include<stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    int cnt=0;
    while(n>=k)
    {
            cnt++;
            n-=k;
    }
    if(cnt%2==0) printf("NO\n");
    else printf("YES\n");
    return 0;
}