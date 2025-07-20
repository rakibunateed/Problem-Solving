#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, q;
  cin >> n >> q;
  vector<vector<ll>> A(n);
  while (q--) {
    ll type;
    cin >> type;
    if (type == 0) {
      ll t;
      ll x;
      cin >> t >> x;
      A[t].push_back(x);
    } else if (type == 1) {
      ll t;
      cin >> t;
      for (ll i = 0; i < A[t].size(); i++) {
        if (i > 0) cout << ' ';
        cout << A[t][i];
      }
      cout << '\n';
    } else if (type == 2) {
      ll t;
      cin >> t;
      A[t].clear();
    }
  }
  return 0;
}