#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s;
  cin >> n >> s;
  vector<ll> cnt(26, 0), p(26, 0);
  for (auto x : s) cnt[x - 'a']++;
  ll ans = 0;
  for (auto x : s) {
    --cnt[x - 'a'];
    ++p[x - 'a'];
    ll cur = 0;
    for (ll i = 0; i < 26; ++i) {
      cur += min(1LL, cnt[i]) + min(1LL, p[i]);
    }
    ans = max(ans, cur);
  }
  cout << ans << "\n";
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