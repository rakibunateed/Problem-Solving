#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
  string s;
  cin >> s;
  if (s[1] == '<') {
    if (s[0] < s[2]) {
      cout << s[0] << "<" << s[2] << endl;
    } else if (s[0] > s[2]) {
      cout << s[0] << ">" << s[2] << endl;
    } else {
      cout << s[0] << "=" << s[2] << endl;
    }
  } else if (s[1] == '>') {
    if (s[0] < s[2]) {
      cout << s[0] << "<" << s[2] << endl;
    } else if (s[0] > s[2]) {
      cout << s[0] << ">" << s[2] << endl;
    } else {
      cout << s[0] << "=" << s[2] << endl;
    }
  } else if (s[1] == '=') {
    if (s[0] < s[2]) {
      cout << s[0] << "<" << s[2] << endl;
    } else if (s[0] > s[2]) {
      cout << s[0] << ">" << s[2] << endl;
    } else {
      cout << s[0] << "=" << s[2] << endl;
    }
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