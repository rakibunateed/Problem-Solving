#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  ll cnt = 0;
  for (ll i = 0; i < n; i++) {
    ll r1 = i % 3;
    ll r2 = i % 5;
    if (r1 == r2) {
      cnt++;
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
  while (t--) solve();
  return 0;
}