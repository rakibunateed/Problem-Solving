#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define nl '\n';
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define all(x) x.begin(), x.end()

void result(ll n, ll m, ll k) {
  ll x = (m % k == 0) ? 1 : (m % k);

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      ll res = ((j + x * i) % k) + 1;
      cout << res << ' ';
    }
    cout << nl;
  }
}

int main() {
  fast_io;
  ll t;
  cin >> t;
  while (t--) {
    ll n, m, k;
    cin >> n >> m >> k;
    result(n, m, k);
  }
  return 0;
}