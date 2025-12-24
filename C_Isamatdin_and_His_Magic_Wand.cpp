#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  bool ev = false, od = false;
  for (ll i = 0; i < n; ++i) {
    cin >> v[i];
    if (v[i] & 1)
      od = true;
    else
      ev = true;
  }
  if (ev && od) sort(v.begin(), v.end());
  for (ll i = 0; i < n; ++i) cout << v[i] << " ";
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