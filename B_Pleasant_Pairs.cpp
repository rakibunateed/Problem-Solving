#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll cnt = 0;
  for (ll i = 2; i <= n; i++) {
    ll m = i + i - 1;
    if (v[i] > m) continue;
    ll x = (m % v[i] + 1);
    ll y = i - x;
    while (y >= 1) {
      if (y + i == v[i] * v[y]) cnt++;
      y -= v[i];
    }
  }
  cout << cnt << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solve();
  return 0;
}