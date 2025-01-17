#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> vec(n);
  ll ods = 0, evs = 0;
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
    if (i & 1)
      ods += vec[i];
    else
      evs += vec[i];
  }
  ll odc = n / 2, evc = n / 2;
  if (n & 1) evc++;
  if (ods % odc != 0 || evs % evc != 0 || ods / odc != evs / evc) {
    cout << "NO" << '\n';
    return;
  }
  cout << "YES" << '\n';
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