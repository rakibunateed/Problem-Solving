#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll pos;
  cin >> pos;
  v.erase(v.begin() + pos - 1);
  ll a, b;
  cin >> a >> b;
  v.erase(v.begin() + a - 1, v.begin() + b - 1);
  cout << v.size() << "\n";
  for (ll i = 0; i < v.size(); i++) cout << v[i] << " ";
  cout << '\n';
  return 0;
}