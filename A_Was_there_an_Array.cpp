#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n - 2);
  for (ll i = 0; i < n - 2; i++) cin >> v[i];
  ll s = v.size();
  bool t = true;
  if (n == 3) t;
  for (ll i = 0; i < s - 2; i++) {
    if (i + 2 < s && v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1) {
      t = false;
      break;
    }
  }
  cout << (t ? "YES" : "NO") << '\n';
  return;
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