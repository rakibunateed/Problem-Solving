#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  ll s = 0;
  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    s -= x;
    s += y;
  }
  cout << s;
  return 0;
}