#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll l = -1;
  for (ll i = 0; i < n; i++) {
    if (v[i] == 0) {
      l = i;
      break;
    }
  }
  ll r = -1;
  for (ll i = n - 1; i >= 0; i--) {
    if (v[i] == 0) {
      r = i;
      break;
    }
  }
  for (ll i = l; i <= r; i++) {
    if (v[i] == 0)
      v[i] = 1;
    else
      v[i] = 0;
  }
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] == 1) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}