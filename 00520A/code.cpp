#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    if(n<26)
    {
        cout << "NO" << endl;
        return 0;
    }
    map<char, int> freq;
    for(int i=0; i<n; i++)
    {
        char ch=tolower(str[i]);
        freq[ch]++;
    }
    if(freq.size()==26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}