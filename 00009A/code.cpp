#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, d;
    cin >> y >> w;
    int m=7-max(y, w);
    int g=gcd(m, 6);
    cout << m/g << "/" << 6/g << endl;
    return 0;
}