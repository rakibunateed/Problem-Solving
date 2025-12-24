#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll r, b;
  cin >> r >> b;
  ll g = min(r, b);
  ll ans = r + 2 * b + 2 * g;
  cout << ans << '\n';
  return 0;
}