#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p, q, r, s, t;
    p= a+(b*c);
    q= a*(b+c);
    r= a*b*c;
    s=(a+b)*c;
    t=a+b+c;
    cout << max(p, max(q, max(r, max(s, t)))) << endl;
    return 0;
}