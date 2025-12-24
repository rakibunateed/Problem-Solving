#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<ll> a(n), b(m);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < m; i++) {
    cin >> b[i];
  }

  ll h = 0, v = 0;
  for (ll i = 0; i < n; i++) {
    if (a[i] < y) {
      h++;
    }
  }
  for (ll i = 0; i < m; i++) {
    if (b[i] < x) {
      v++;
    }
  }
  cout << h + v << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}