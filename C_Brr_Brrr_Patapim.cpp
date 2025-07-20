#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  ll a[n][n];
  set<ll> s;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> a[i][j];
      s.insert(a[i][j]);
    }
  }
  if (n <= 1) {
    cout << "2 1\n";
    return;
  }
  for (ll i = 1; i <= n * n; i++) {
    if (s.find(i) == s.end()) {
      cout << i << " ";
      break;
    }
  }
  vector<ll> v;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      if (find(v.begin(), v.end(), a[i][j]) == v.end()) {
        v.push_back(a[i][j]);
      }
    }
  }
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