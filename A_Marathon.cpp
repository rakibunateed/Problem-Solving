#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b, c, d, count = 0;
  cin >> a >> b >> c >> d;
  if (a < b) {
    count++;
  }
  if (a < c) {
    count++;
  }
  if (a < d) {
    count++;
  }
  cout << count << '\n';
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