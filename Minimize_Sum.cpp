#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m;
  cin >> n >> m;
  vector<ll> v(m, 0);
  ll sum = 0;
  for (ll i = 0; i < n; ++i) {
    ll x;
    cin >> x;
    sum += x;
    v[x]++;
  }
  ll ans = sum, s = sum;
  for (ll k = 1; k < m; ++k) {
    ll idx = m - k;
    s = s + n - 1LL * m * v[idx];
    if (s < ans) ans = s;
  }
  cout << ans << '\n';
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