#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n), m;
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0; i < n; i++) {
    for (ll j = i + 1; j < n; j++) {
      ll s = (v[i] + v[j] + j) - i;
      m.push_back(s);
    }
  }

  cout << *min_element(m.begin(), m.end()) << '\n';
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