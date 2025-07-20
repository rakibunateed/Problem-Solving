#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k, cnt = 0;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  for (ll i = 0; i < n; i++) {
    if (5 - v[i] >= k) cnt++;
  }
  cout << cnt / 3 << '\n';
  return 0;
}