#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll i = 0; i < n; ++i) cin >> a[i];
  for (ll i = 0; i < n; ++i) cin >> b[i];
  ll Xor = 0, x = -1;
  for (ll i = 0; i < n; ++i) {
    ll d = a[i] ^ b[i];
    Xor ^= d;
    if (d) x = i;
  }
  if (Xor == 0)
    cout << "Tie\n";
  else {
    if (x & 1)
      cout << "Mai\n";
    else
      cout << "Ajisai\n";
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