#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  if (n == 1) {
    cout << v[0] << " " << v[0] << '\n';
    return;
  }
  sort(v.begin(), v.end());
  for (ll i = 0; i < n - 1; i++) {
    ll target = v[i] + v[i + 1];
    if (binary_search(v.begin(), v.end(), target)) {
      continue;
    } else {
      cout << v[i] << " " << v[i + 1] << '\n';
      return;
    }
  }
  cout << "-1\n";
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
