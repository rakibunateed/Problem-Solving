#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long ll;
void solution() {
  ll n, x;
  cin >> n >> x;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.rbegin(), v.rend());
  ll cnt = 0, s = 0;
  for (ll i = 0; i < n; i++) {
    s++;
    if (s * v[i] >= x) {
      cnt++;
      s = 0;
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