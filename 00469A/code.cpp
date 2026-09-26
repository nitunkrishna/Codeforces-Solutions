#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    vector<int>x(p);
    for(int i=0; i<p; i++)
        cin >> x[i];
    cin >> q;
    vector<int>y(q);
    for(int i=0; i<q; i++)
        cin >> y[i];
    vector<int> concat;
    for(int i=0; i<p; i++)
        concat.push_back(x[i]);
    for(int i=0; i<q; i++)
        concat.push_back(y[i]);
    for(int i=1; i<=n; i++)
    {
        bool flag=false;
        for(int j=0; j<concat.size(); j++)
        {
            if(i==concat[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}