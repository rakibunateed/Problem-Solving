#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, q;
  cin >> n >> q;
  vector<ll> v(mx);
  vector<ll> prefixSum(mx);
  for (ll i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (ll i = 1; i <= n; i++) {
    prefixSum[i] = prefixSum[i - 1] + v[i];
  }
  while (q--) {
    ll l, r;
    cin >> l >> r;
    cout << prefixSum[r] - prefixSum[l - 1] << '\n';
  }
  return 0;
}