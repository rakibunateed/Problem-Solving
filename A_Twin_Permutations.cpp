#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve() {
  ll n;
  cin >> n;
  vector<int> vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }
  for (ll i = 0; i < n; i++) {
    cout << n - vec[i] + 1 << " ";
  }
  cout << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}