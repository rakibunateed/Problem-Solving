#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  for (ll i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      for (ll j = 0; j < m; ++j) cout << "#";
    } else {
      if (i % 4 == 1) {
        for (ll j = 0; j < m - 1; ++j) cout << ".";
        cout << "#";
      } else {
        cout << "#";
        for (ll j = 1; j < m; ++j) cout << ".";
      }
    }
    cout << '\n';
  }
  return 0;
}