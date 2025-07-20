#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  ll ct = 0;
  for (ll i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      ct++;
    }
  }
  cout << ct << '\n';
  return 0;
}