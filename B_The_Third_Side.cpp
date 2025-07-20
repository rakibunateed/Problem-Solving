#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll s = 0;
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
    s += v[i];
  }
  s = s - (n - 1);
  cout << s << '\n';
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