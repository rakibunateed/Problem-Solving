#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, cnt = 0;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    ll live = abs(x - y);
    if (live >= 2) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}