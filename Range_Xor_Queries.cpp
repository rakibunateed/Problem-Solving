#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t, n;
  cin >> t >> n;
  vector<ll> v(t + 1);
  vector<ll> sum(t + 1);
  for (ll i = 1; i <= t; i++) cin >> v[i];

  for (ll i = 1; i <= t; i++) {
    sum[i] = sum[i - 1] ^ v[i];
  }
  while (n--) {
    ll l, r;
    cin >> l >> r;
    cout << (sum[r] ^ sum[l - 1]) << '\n';
  }
  return 0;
}