#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  ;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  ll sz1 = unique(a.begin(), a.end()) - a.begin();
  sort(b.begin(), b.end());
  ll sz2 = unique(b.begin(), b.end()) - b.begin();
  if (sz1 >= 3 || sz2 >= 3) {
    cout << "YES\n";
  } else if (sz1 == 2 && sz2 == 2) {
    for (ll i = 0; i < sz1; i++) {
      ll x = a[i] + b[i];
      c.push_back(x);
    }
    sort(c.begin(), c.end());
    ll sz3 = unique(c.begin(), c.end()) - c.begin();
    if (sz3 >= 3)
      cout << "YES\n";
    else
      cout << " NO\n";
  } else
    cout << " NO\n";
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solve();
  return 0;
}