#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a[5][5];
  for (ll i = 0; i < 5; i++) {
    for (ll j = 0; j < 5; j++) cin >> a[i][j];
  }
  bool find = false;
  ll r, l;
  for (ll i = 0; i < 5; i++) {
    for (ll j = 0; j < 5; j++) {
      if (a[i][j] == 1) {
        r = i + 1;
        l = j + 1;
        find = true;
        break;
      }
    }
    if (find) break;
  }
  ll row = abs(r - 3);
  ll col = abs(l - 3);
  cout << row + col << '\n';
  return 0;
}