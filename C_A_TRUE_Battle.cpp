#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  string s;
  cin >> s;
  bool find = false;
  if (s[0] == '1' || s[n - 1] == '1') {
    cout << "YES" << '\n';
    return;
  }
  for (ll i = 0; i < s.length() - 1; i++) {
    if (s[i] == '1' && s[i + 1] == '1') {
      find = true;
      break;
    }
  }
  if (find) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
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