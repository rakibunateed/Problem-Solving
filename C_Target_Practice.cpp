#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  char a[10][10];
  for (ll i = 0; i < 10; i++)
    for (ll j = 0; j < 10; j++) cin >> a[i][j];
  ll total = 0;
  for (ll i = 0; i < 10; i++) {
    for (ll j = 0; j < 10; j++) {
      if (a[i][j] == 'X') {
        ll ring = min({i, j, 9 - i, 9 - j}) + 1;
        total += ring;
      }
    }
  }
  cout << total << '\n';
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