#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  map<ll, ll> m;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  ll ans = -1;
  for (auto u : m) {
    if (u.second >= 3) ans = u.first;
  }
  cout << ans << '\n';
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