#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n, m;
  cin >> n >> m;
  ll pm = m * 4;
  ll x, y;
  cin >> x >> y;
  for (ll i = 1; i < n; i++) {
    cin >> x >> y;
    pm += (m * 4) - (m - x) * 2 - (m - y) * 2;
  }
  cout << pm << '\n';
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