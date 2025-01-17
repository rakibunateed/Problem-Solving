#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll a, b, count = 0;
  cin >> a >> b;
  while (true) {
    if (a % b == 0) {
      break;
    } else {
      a++;
      count++;
    }
  }
  cout << count << '\n';
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