#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  ll ans = 0, pt = 0, ps = 0;
  for (ll i = 0; i < n; i++) {
    ll dt = a[i] - pt;
    ll np = (ps != b[i]);
    if (dt % 2 == np)
      ans += dt;
    else
      ans += dt - 1;
    pt = a[i];
    ps = b[i];
  }
  ll dt = m - pt;
  ans += dt;
  cout << ans << "\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}