#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, k, cnt = 0;
  string s;
  cin >> n >> k >> s;
  for (ll i = 0; i < k; i++) {
    if (s[i] == 'W') cnt++;
  }
  ll ans = cnt;
  for (ll i = k; i < n; i++) {
    if (s[i] == 'W') cnt++;
    if (s[i - k] == 'W') cnt--;
    ans = min(ans, cnt);
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