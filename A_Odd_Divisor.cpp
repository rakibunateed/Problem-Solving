#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  while (n % 2 == 0) {
    n /= 2;
  }
  if (n > 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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