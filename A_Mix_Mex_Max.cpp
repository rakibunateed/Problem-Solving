#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    int v = -1;
    bool ok = true;
    for (ll x : a) {
      if (x == -1) continue;
      if (v == -1)
        v = x;
      else if (x != v)
        ok = false;
    }
    if (!ok) {
      cout << "NO\n";
    } else if (v == -1) {
      cout << "YES\n";
    } else {
      cout << (v > 0 ? "YES\n" : "NO\n");
    }
  }
  return 0;
}