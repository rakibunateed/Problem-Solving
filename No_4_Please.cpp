#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n, c1 = 0, c2 = 0, c3 = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == 1)
      c1++;
    else if (v[i] == 2)
      c2++;
    else
      c3++;
  }
  ll ans = max(c1, c3) + (c2 > 0 ? 1 : 0);
  cout << n - ans << "\n";
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