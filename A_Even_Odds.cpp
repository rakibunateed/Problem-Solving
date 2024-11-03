#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, k;
    cin >> n >> k;
    ll odd_count = (n + 1) / 2;
    if (k <= odd_count) {
        cout << 2 * k - 1 << endl;
    } else {
    ll even_index = k - odd_count;
        cout << 2 * even_index << endl;
    }
    return 0;
}