#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k, l, c, d, p, nll, np;
  cin >> n >> k >> l >> c >> d >> p >> nll >> np;
  ll w = (k * l);
  ll x = w / nll;
  ll y = c * d;
  ll z = p / np;
  ll sol = min({x, y, z}) / n;
  cout << sol << '\n';
  return 0;
}