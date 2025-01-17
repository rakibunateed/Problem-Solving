#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b;
  cin >> a >> b;
  ll result = ((b / (float)a) * 100);
  if (result >= 50) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
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