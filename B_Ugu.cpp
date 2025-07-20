#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
  ll n;
  string s;
  cin >> n >> s;
  ll c = 0, ind = 0;
  bool b = 0;
  for (ll i = 0; i < n - 1; i++) {
    if (s[i] > s[i + 1]) {
      b = 1;
      ind = i + 1;
      break;
    }
  }
  if (b)
    for (ll i = ind; i < n; i++) {
      if (s[i] == '1') {
        if (c & 1) c++;
      }
      if (s[i] == '0') {
        if (!(c & 1)) c++;
      }
    }
  cout << c << '\n';
  return;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}