#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, x;
  cin >> n >> x;
  vector<ll> v(mx);
  vector<ll> sum(mx);
  for (ll i = 1; i <= n; i++) cin >> v[i];
  for (ll i = 1; i <= n; i++) sum[i] = sum[i - 1] + v[i];
  map<ll, ll> m;
  m[0] = 1;
  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    ll minusSum = sum[i] - x;
    ans += m[minusSum];
    m[sum[i]]++;
  }
  cout << ans << '\n';
  return 0;
}