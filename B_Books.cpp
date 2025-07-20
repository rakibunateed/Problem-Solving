#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, t, s = 0, cnt = 0;
  cin >> n >> t;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0, j = 0; i < n; i++) {
    s += v[i];
    if (s <= t)
      cnt++;
    else {
      s -= v[j];
      j++;
    }
  }
  cout << cnt << '\n';
  return 0;
}