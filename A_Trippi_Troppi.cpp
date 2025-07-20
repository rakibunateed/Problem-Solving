#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution() {
  string s;
  char c;
  cin >> c;
  getline(cin, s);
  s = c + s;
  cout << s[0];
  for (ll i = 0; i < s.length() - 1; i++) {
    if (s[i] == ' ') {
      cout << s[i + 1];
    }
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
