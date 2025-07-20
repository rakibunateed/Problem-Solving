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
  vector<ll> v(mx);
  vector<ll> prefixSum(mx);
  for (ll i = 1; i <= n; i++) cin >> v[i];
  for (ll i = 1; i <= n; i++) {
    if (v[i] < 0) {
      v[i] = ((v[i] % n) + n) % n;
    }
  }
  for (ll i = 1; i <= n; i++) prefixSum[i] = (prefixSum[i - 1] + v[i]) % n;
  ll ans = 0;
  map<ll, ll> m;
  m[0] = 1;
  for (ll i = 1; i <= n; i++) {
    ans += m[prefixSum[i]];
    m[prefixSum[i]]++;
  }
  cout << ans << '\n';
  return 0;
}