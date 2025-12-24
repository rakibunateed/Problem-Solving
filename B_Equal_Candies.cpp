#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll s = 0, mn = *min_element(v.begin(), v.end());
  for (ll i = 0; i < n; i++) s += abs(v[i] - mn);
  cout << s << '\n';
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