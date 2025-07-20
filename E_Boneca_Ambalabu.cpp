#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
#define nl '\n';
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define all(x) x.begin(), x.end()

void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll sum = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }
  sort(v.rbegin(), v.rend());
  ll m;
  for (ll i = 0; i < n; i++) {
    sum -= v[i];
    if (v[i] > sum) {
      m = v[i];
      break;
    }
  }

  ll s = 0;
  for (ll i = 0; i < n; i++) {
    s = s + (m ^ v[i]);
  }
  cout << s << nl;

  return;
}
int main() {
  fast_io;
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}