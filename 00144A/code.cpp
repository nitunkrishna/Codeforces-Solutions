#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    int mx=*max_element(v.begin(), v.end());
    int mn=*min_element(v.begin(), v.end());
    int mx_i, mn_i;
    for(int i=0; i<n; i++)
    {
        if(v[i]==mx)
        {
            mx_i=i;
            break;
        }
    }
    while(mx_i>0)
    {
        swap(v[mx_i], v[mx_i-1]);
        mx_i--;
        cnt++;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]==mn)
        {
            mn_i=i;
            break;
        }
    }
    while(mn_i<n-1)
    {
        swap(v[mn_i], v[mn_i+1]);
        mn_i++;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}