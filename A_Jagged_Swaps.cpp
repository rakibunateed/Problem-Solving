#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  for (ll i = 0; i < 10; i++) {
    for (ll i = 1; i < n - 1; i++)
      if (v[i] > v[i - 1] && v[i] > v[i + 1]) swap(v[i], v[i + 1]);
  }

  if (is_sorted(v.begin(), v.end()))
    cout << "YES\n";
  else
    cout << "NO\n";
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