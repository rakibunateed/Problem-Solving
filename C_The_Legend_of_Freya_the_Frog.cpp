#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll x, y, k;
  cin >> x >> y >> k;
  ll ans = 0;
  ans += 2 * max((x + k - 1) / k, (y + k - 1) / k);
  if ((x + k - 1) / k > (y + k - 1) / k) {
    ans--;
  }
  cout << ans << '\n';
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