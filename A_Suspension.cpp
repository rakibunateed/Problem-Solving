#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
void solution() {
  ll n, y, r;
  cin >> n >> y >> r;
  n = n - r;
  ll c = 0;
  for (ll i = 0; i < n; i++) {
    if (y >= 2) {
      c += 1;
      y -= 2;
    }
  }

  cout << c + r << '\n';
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