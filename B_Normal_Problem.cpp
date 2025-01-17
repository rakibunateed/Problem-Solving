#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'q') {
      s[i] = 'p';
    } else if (s[i] == 'p') {
      s[i] = 'q';
    }
  }
  ll j = s.length() - 1;
  for (int i = 0; i < s.length() / 2; i++) {
    swap(s[i], s[j]);
    j--;
  }
  cout << s << '\n';
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