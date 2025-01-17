#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  string s;
  cin >> s;
  if (s[0] == 'a') {
    cout << "YES" << endl;
  } else if (s[1] == 'b') {
    cout << "YES" << endl;
  } else if (s[2] == 'c') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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