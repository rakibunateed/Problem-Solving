#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  for (ll i = (n + 1) / 2; i <= n; i++) {
    if (i % m == 0) {
      cout << i << '\n';
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}