#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  string s;
  getline(cin, s);
  swap(s[0], s[4]);
  cout << s << endl;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }
  return 0;
}