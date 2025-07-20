#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n);
  map<ll, ll> m;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    m[v[i]]++;
  }
  ll ans = 0;
  for (ll i = 0; i < n; i++) ans = max(ans, m[v[i]]);
  cout << ans << '\n';
  return 0;
}