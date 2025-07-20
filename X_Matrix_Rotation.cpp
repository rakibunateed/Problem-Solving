#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a[2][2];
  bool ans = false;
  for (ll i = 0; i < 2; i++) {
    for (ll j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }
  for (ll i = 0; i < 2; i++) {
    for (ll j = 0; j < 2 - 1; j++) {
      if (a[i][j] < a[i][j + 1]) {
        ans = true;
      }
    }
  }
  for (ll i = 0; i < 2; i++) {
    for (ll j = 0; j < 2; j++) {
      if (a[i][j] < a[i][j + 1]) {
        ans = true;
      }
    }
  }
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