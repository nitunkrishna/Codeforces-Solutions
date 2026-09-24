#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt=0;
        cin >> n;
        for(int i=1; ; i++)
        {
            if(i%3!=0 && i%10!=3) cnt++;
            if(cnt==n)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}