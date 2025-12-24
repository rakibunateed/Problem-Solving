#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; ++i) {
    if (i % 2 == 1)
      cout << -1;
    else {
      if (i == n)
        cout << 2;
      else
        cout << 3;
    }
    if (i < n) cout << ' ';
  }
  cout << '\n';
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