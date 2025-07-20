#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, s = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  sort(v.rbegin(), v.rend());
  for (ll i = 0; i < n - 1; i++) {
    if (v[i] > v[i + 1]) {
      s += abs(v[i] - v[i + 1]);
      v[i + 1] = v[i];
    }
  }
  cout << s << '\n';
  return 0;
}