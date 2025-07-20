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
  ll f = 0;
  for (ll i = 0; i < n; i++) {
    if (v[i] <= i * 2 || v[i] <= (n - i - 1) * 2) {
      f = 1;
      break;
    }
  }
  cout << ((!f) ? "YES\n" : "NO\n");
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