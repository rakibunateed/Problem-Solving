#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = a, y = b, z = c, temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    cout << a << endl
         << b << endl
         << c << endl
         << endl
         << x << endl
         << y << endl
         << z << endl;
    return 0;
}