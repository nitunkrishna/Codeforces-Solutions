#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(str== "Timur" || str== "miurT" || str== "Trumi" || str== "mriTu") cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
    return 0;
}