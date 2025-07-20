#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m, a, b;
  cin >> n >> m >> a >> b;
  ll s = 0;
  for (ll i = 0; i <= n - 1; i++) {
    s += ((a * i + b) / m);
  }
  cout << s << '\n';
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