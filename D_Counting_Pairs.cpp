#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n, x, y, sum = 0, cnt = 0;
  cin >> n >> x >> y;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      ll m = sum - v[i] - v[j];
      if (m >= x && m <= y) {
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