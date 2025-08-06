#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
const ll sqrt_lim = 1000001;

set<ll> prime_squares() {
  static bool v[sqrt_lim];
  for (ll i = 2; i * i < sqrt_lim; i++) {
    if (!v[i]) {
      for (ll j = i * i; j < sqrt_lim; j += i) {
        v[j] = true;
      }
    }
  }
  set<ll> res;
  for (ll i = 2; i < sqrt_lim; i++) {
    if (!v[i]) res.insert((ll)i * i);
  }
  return res;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  set<ll> sq(prime_squares());
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (sq.find(x) != sq.end()) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}