#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    vector<char>v;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==' ' || str[i]==',' || str[i]=='{' || str[i]=='}') continue;
        else
        {
            bool flag=true;
            for(int j=0; j<v.size(); j++)
            {
                if(str[i]==v[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true) v.push_back(str[i]);
        }
    }
    cout << v.size() << endl;
    return 0;
}
