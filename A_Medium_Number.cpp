#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll first = max({a, b, c});
  ll third = min({a, b, c});
  ll sum = a + b + c;
  ll second = sum - first - third;
  cout << second << '\n';
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