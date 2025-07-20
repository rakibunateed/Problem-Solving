#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  double s = 0;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    s += v[i];
  }
  cout << fixed << setprecision(12);
  cout << s / (float)n << '\n';
  return 0;
}