#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  char a[n][4];
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < 4; j++) {
      cin >> a[i][j];
    }
  }
  vector<ll> v;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < 4; j++) {
      if (a[i][j] == '#') {
        v.push_back(j + 1);
      }
    }
  }
  reverse(v.begin(), v.end());
  for (auto u : v) {
    cout << u << " ";
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