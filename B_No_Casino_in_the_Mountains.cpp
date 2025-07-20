#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; ++i) cin >> v[i];
  ll cnt = 0;
  ll i = 0;
  while (i <= n - k) {
    bool hike = true;
    for (ll j = 0; j < k; ++j) {
      if (v[i + j] == 1) {
        hike = false;
        break;
      }
    }
    if (hike) {
      cnt++;
      i += k + 1;
    } else {
      i++;
    }
  }
  cout << cnt << '\n';
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