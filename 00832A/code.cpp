#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long chk=n/k;
    if((chk%2)!=1) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}