#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  bool flag = true;
  for (ll i = 1; i < n; i++) {
    if (v[i] != v[0]) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  ll M = *max_element(v.begin(), v.end());
  for (ll i = 0; i < n; i++) {
    cout << (v[i] == M ? 2 : 1) << (i + 1 == n ? "\n" : " ");
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}