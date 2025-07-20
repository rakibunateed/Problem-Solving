#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  ll ans = 0;
  if (a == b && b == c) {
    ans += 1;
  } else if (a + b + c == n) {
    ans += 3;
  } else if (a + b == n) {
    ans += 2;
  } else if (a + c == n) {
    ans += 2;
  } else if (b + c == n) {
    ans += 2;
  } else if (a + b + c != n) {
    ll mn = min({a, b, c});
    ans += n / mn;
  }
  cout << ans << '\n';
  return 0;
}