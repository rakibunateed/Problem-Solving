#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    cout << sum << endl;
    return 0;
}
