#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  vector<ll> v(4);
  ll cnt = 0;
  for (ll i = 0; i < 4; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (ll i = 0; i < 4 - 1; i++) {
    if (v[i] == v[i + 1]) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}