#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  if ((a + b + c) & 1)
    cout << "-1\n";
  else if (a + b > c)
    cout << (a + b + c) / 2 << '\n';
  else
    cout << (a + b) << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}