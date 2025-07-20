#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }
  ll j = 1;
  for (ll i = 0; i < n; i++) {
    ll cnt = 0;
    while (j * j <= v[i]) {
      if (v[i] % j == 0) {
        cnt++;
        if (j != v[i] / j) {
          cnt++;
        }
      }
      j++;
    }
    if (cnt == 3) {
      cout << "YES\n";
      j = 1;
    } else if (cnt > 3) {
      cout << "NO\n";
      j = 1;
    } else {
      cout << "NO\n";
      j = 1;
    }
  }
  return 0;
}