#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n, s = 0;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    s += v[i];
  }
  if (s & 1)
    cout << "NO\n";
  else
    cout << "YES\n";
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