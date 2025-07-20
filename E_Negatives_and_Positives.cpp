#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll s = 0;
  ll neg = 0;
  for (ll i = 0; i < n; ++i) {
    cin >> v[i];
    if (v[i] < 0) {
      neg++;
      v[i] = -v[i];
    }
    s += v[i];
  }
  sort(v.begin(), v.end());
  if (neg & 1) s -= 2 * v[0];
  cout << s << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solve();
  return 0;
}