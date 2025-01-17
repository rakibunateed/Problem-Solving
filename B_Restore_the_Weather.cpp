#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> vec1(n), vec2(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec1[i];
  }
  for (ll i = 0; i < n; i++) {
    cin >> vec2[i];
  }
  sort(vec1.begin(), vec1.end());
  sort(vec2.begin(), vec2.end());
  for (ll i = 0; i < n; i++) {
    cout << vec2[i] << " ";
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