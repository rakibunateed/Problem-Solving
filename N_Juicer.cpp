#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll w = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] >= m) continue;
    w += v[i];
  }
  cout << w / k << '\n';
  return 0;
}