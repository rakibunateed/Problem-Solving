#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m, cnt = 0;
  cin >> n >> m;
  for (ll i = n; i <= m; i++) {
    ll r = i % 10;
    if (r == 2 || r == 3 || r == 9) cnt++;
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