#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  ll earn = 0;
  for (ll i = 0; i < m; i++) {
    if (v[i] <= 0) earn += abs(v[i]);
  }
  cout << earn << '\n';
  return 0;
}