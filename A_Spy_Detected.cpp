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
  if (v[0] != v[1]) {
    if (v[0] != v[2])
      cout << 1 << '\n';
    else
      cout << 2 << '\n';
  } else {
    for (ll i = 2; i < n; i++) {
      if (v[i] != v[0]) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
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