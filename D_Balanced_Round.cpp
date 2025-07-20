#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solve() {
  ll n, k, count1 = 0, count2 = 0;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  for (ll i = 0; i < n - 1; i++) {
    ll temp = v[i + 1] - v[i];

    if (temp > k && temp != k) {
      count1 = max(count1, count2);
      count2 = 0;
      continue;
    }
    count2++;
  }
  ll count = max(count1, count2);
  cout << (n - count) - 1 << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}