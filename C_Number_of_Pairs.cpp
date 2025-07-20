#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n, l, r;
  cin >> n >> l >> r;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      ll sum = v[i] + v[j];
      if (sum >= l && sum <= r) {
        cnt++;
      }
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