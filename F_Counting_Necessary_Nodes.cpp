#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
vector<ll> v(ll L, ll R) {
  vector<ll> sg;
  while (L < R) {
    ll s = 1;
    while ((L % (s * 2) == 0) && (L + s * 2 <= R)) {
      s *= 2;
    }
    sg.push_back(s);
    L += s;
  }
  return sg;
}
void solve() {
  ll l, r, m, n;
  cin >> l >> r >> m >> n;
  vector<ll> x = v(l, r);
  vector<ll> y = v(m, n);
  vector<ll> x1, y1;
  for (auto s : x) {
    ll e = __builtin_ctz(s);
    x1.push_back(e);
  }
  for (auto s : y) {
    ll e = __builtin_ctz(s);
    y1.push_back(e);
  }
  ll ans = 0;
  for (auto e1 : x1) {
    for (ll e2 : y1) {
      ll diff = (e1 > e2 ? e1 - e2 : e2 - e1);
      ans += (1LL << diff);
    }
  }
  cout << ans << '\n';
  return;
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