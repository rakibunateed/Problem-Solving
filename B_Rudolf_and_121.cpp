#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (ll i = 0;; i++) {
    ll it = *max_element(v.begin(), v.end());
    v[i] -= 2;
    v[i - 1] -= 1;
    v[i + 1] -= 1;
  }
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