#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(2 * n);
  for (ll i = 0; i < 2 * n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll cnt = 0;
  for (ll i = 0; i < 2 * n; i += 2) {
    cnt += v[i];
  }
  cout << cnt << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}