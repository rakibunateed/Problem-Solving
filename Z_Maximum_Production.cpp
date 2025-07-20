#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll d, x, y, z;
  cin >> d >> x >> y >> z;
  ll ans1 = 7 * x;
  ll ans2 = (y * d) + (z * (7 - d));
  cout << max(ans1, ans2) << '\n';
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