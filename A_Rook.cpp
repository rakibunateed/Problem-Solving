#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  string s;
  cin >> s;
  char ch = s[0];
  for (ll i = 1; i <= 8; i++) {
    if ((ch + to_string(i)) == s) continue;
    cout << (ch + to_string(i)) << '\n';
  }
  for (char i = 'a'; i <= 'h'; i++) {
    if (i + s.substr(1, 1) == s) continue;
    cout << i + s.substr(1, 1) << '\n';
  }
  return;
}
int main() {
  ll t;
  cin >> t;
  while (t--) solve();
  return 0;
}