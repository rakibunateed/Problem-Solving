#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (ll& x : a) cin >> x;
  ll b;
  cin >> b;
  ll mn = min(a[0], b - a[0]);
  bool t = true;
  for (ll i = 1; i < n; i++) {
    ll p = a[i];
    ll q = b - a[i];
    if (p >= mn && q >= mn) {
      mn = min(p, q);
    } else if (p >= mn) {
      mn = p;
    } else if (q >= mn) {
      mn = q;
    } else {
      t = false;
      break;
    }
  }
  cout << (t ? "YES\n" : "NO\n");
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