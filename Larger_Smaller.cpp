#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll mn = v[0];
  ll mx = v[n - 1];
  ll ans = max(0LL, mx - mn - 1);
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