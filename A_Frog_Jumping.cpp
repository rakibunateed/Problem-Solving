#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll pairs = k / 2;
  ll x = pairs * (a - b);
  if (k % 2 == 1) x += a;
  cout << x << '\n';
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