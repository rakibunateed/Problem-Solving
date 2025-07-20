#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m, l, r;
  cin >> n >> m >> l >> r;
  ll minus = n - m;
  if (minus >= r) {
    minus -= r;
    r = 0;
  } else {
    r -= minus;
    minus = 0;
  }
  l += minus;
  cout << l << " " << r << '\n';
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