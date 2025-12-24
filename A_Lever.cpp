#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  for (ll i = 0; i < n; ++i) cin >> a[i];
  for (ll i = 0; i < n; ++i) cin >> b[i];
  ll index = 0;
  for (ll i = 0; i < n; ++i)
    if (a[i] > b[i]) index += (a[i] - b[i]);
  cout << (index + 1) << "\n";
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