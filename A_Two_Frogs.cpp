#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll difference = abs(a - b);
  if (difference % 2 != 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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