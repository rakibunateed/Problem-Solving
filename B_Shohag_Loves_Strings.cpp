#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  string s;
  cin >> s;
  if (s.length() == 1) {
    cout << "-1\n";
    return;
  }
  if (s.length() == 2) {
    if (s[0] != s[1]) {
      cout << "-1\n";
      return;
    }
  }
  for (ll i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1]) {
      cout << s[i] << s[i + 1] << '\n';
      return;
    }
  }
  for (ll i = 0; i < s.length() - 2; i++) {
    if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
      cout << s[i] << s[i + 1] << s[i + 2] << '\n';
      return;
    }
  }
  cout << -1 << '\n';
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