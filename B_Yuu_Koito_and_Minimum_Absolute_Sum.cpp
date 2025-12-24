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
  if (v[0] != -1 && v[n - 1] == -1)
    v[n - 1] = v[0];
  else if (v[0] == -1 && v[n - 1] != -1)
    v[0] = v[n - 1];
  else if (v[0] == -1 && v[n - 1] == -1) {
    v[0] = 0;
    v[n - 1] = 0;
  }
  cout << abs(v[n - 1] - v[0]) << '\n';
  for (ll i = 0; i < n; i++) {
    if (v[i] < 0) v[i] = 0;
    cout << v[i] << " ";
  }
  cout << '\n';
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