#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, h, width = 0;
  cin >> n >> h;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0; i < n; i++) {
    if (v[i] <= h)
      width += 1;
    else
      width += 2;
  }
  cout << width << '\n';
  return 0;
}