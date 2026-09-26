#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        int cnt=0;
        for(int i=0; i<n/2; i++)
        {
            int j=n-i-1;
            if(s[i]==s[j]) continue;
            else if(s[i]==c || s[j]==c)  cnt++;
            else cnt+=2;
        }
        cout << cnt << endl;
    }
    return 0;
}