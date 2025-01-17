#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  char ch;
  cin >> ch;
  if (ch == 'c' || ch == 'o' || ch == 'd' || ch == 'e' || ch == 'f' ||
      ch == 'o' || ch == 'r' || ch == 'c' || ch == 'e' || ch == 's') {
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