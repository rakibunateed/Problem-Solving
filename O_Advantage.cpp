#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll mx = *max_element(v.begin(), v.end());
  ll mn = v[0];
  for (ll i = 0; i < n; i++) {
    if (v[i] != mx) mn = max(mn, v[i]);
  }
  for (ll i = 0; i < n; i++) {
    if (v[i] == mx) {
      cout << v[i] - mn << " ";
    } else
      cout << v[i] - mx << " ";
  }
  // cout << mx << " " << mn;
  cout << '\n';
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