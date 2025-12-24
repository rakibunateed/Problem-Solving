#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll x, y;
  cin >> x >> y;
  vector<ll> v;
  for (ll i = y; i <= y + 5; i++) {
    for (ll j = i; j <= y + 5; j++) {
      v.push_back(i + j);
    }
  }
  for (ll i = 0; i < v.size(); i++) {
    if (v[i] + x == 50) {
      cout << "Yes\n";
      return;
    }
  }
  cout << "No\n";
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