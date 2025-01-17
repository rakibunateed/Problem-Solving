#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  char ch[3][3];
  for (ll i = 0; i < 3; i++) {
    for (ll j = 0; j < 3; j++) {
      cin >> ch[i][j];
    }
  }
  ll a = 0, b = 0, c = 0;
  for (ll i = 0; i < 3; i++) {
    for (ll j = 0; j < 3; j++) {
      if (ch[i][j] == 'A') {
        a++;
      }
      if (ch[i][j] == 'B') {
        b++;
      }
      if (ch[i][j] == 'C') {
        c++;
      }
    }
  }
  if (a != 3) {
    cout << "A" << '\n';
  } else if (b != 3) {
    cout << "B" << '\n';
  } else {
    cout << "C" << '\n';
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