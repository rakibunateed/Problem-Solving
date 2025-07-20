#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  vector<ll> v(mx);
  ll c1 = 0, c2 = 0;
  for (ll i = 0; i < 7; i++) {
    cin >> v[i];
    if (v[i] == 1)
      c1++;
    else
      c2++;
  }
  cout << (c1 > c2 ? "YES" : "NO") << '\n';
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