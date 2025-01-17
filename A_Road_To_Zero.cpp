#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
  ll x, y;
  cin >> x >> y;
  ll a, b;
  cin >> a >> b;
  if (b > 2 * a) {
    b = 2 * a;
  }
  ll m = min(x, y);
  ll price = m * b + (abs(x - y)) * a;
  cout << price << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}