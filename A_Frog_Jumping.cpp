#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll pairs = k / 2;
  ll x = pairs * (a - b);
  if (k % 2 == 1) {
    x += a;
  }
  cout << x << '\n';
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