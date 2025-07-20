#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll x, y;
  cin >> x >> y;
  ll a, b;
  cin >> a >> b;
  if (b > 2 * a) {
    b = 2 * a;
  }
  ll m = min(x, y);
  ll price = m * b + (abs(x - y)) * a;
  cout << price << '\n';
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