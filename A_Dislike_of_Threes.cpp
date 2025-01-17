#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, count = 0;
  cin >> n;
  ll i = 1;
  while (1) {
    if (i % 3 != 0 && i % 10 != 3) {
      count++;
      if (count == n) {
        cout << i << '\n';
        break;
      }
    }
    i++;
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