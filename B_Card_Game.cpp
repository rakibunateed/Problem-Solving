#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solve() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll cnt = 0;
  if ((a > c && b >= d) || (a >= c && b > d)) cnt += 2;
  if ((b > c && a >= d) || (b >= c && a > d)) cnt += 2;
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