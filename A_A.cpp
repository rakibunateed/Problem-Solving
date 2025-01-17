#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  if (n > 100) {
    cout << n - 10 << '\n';
  } else {
    cout << n << '\n';
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