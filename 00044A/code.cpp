#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<string, string>>s;
    for(int i=0; i<n; i++)
    {
        string spc, col;
        cin >> spc >> col;
        s.insert({spc, col});
    }
    cout << s.size() << endl;
    return 0;
}