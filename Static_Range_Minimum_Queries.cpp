#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, t;
  cin >> n >> t;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  while (t--) {
    ll l, r;
    cin >> l >> r;
    cout << *min_element(v.begin() + l - 1, v.begin() + r) << "\n";
  }
  return 0;
}