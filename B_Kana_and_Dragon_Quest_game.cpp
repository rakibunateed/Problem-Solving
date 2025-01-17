#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll x, n, m;
  cin >> x >> n >> m;
  for (ll i = 0; i < n; i++) {
    x = (x / 2) + 10;
  }
  cout << x << endl;
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