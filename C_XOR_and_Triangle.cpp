#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  ll ans = -1;
  ll l = 1, r = n - 1;
  while (l <= r) {
    ll mid = l + (r - l) / 2;
    ll Xor = n ^ mid;
    if (n + mid > Xor && n + Xor > mid && mid + Xor > n) {
      ans = mid;
      break;
    } else if (n + mid < Xor) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  cout << ans << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}