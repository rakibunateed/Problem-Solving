#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m, p, q;
  cin >> n >> m >> p >> q;
  ll k = n / p;
  ll r = n % p;
  if (r == 0) {
    cout << (m == k * q ? "YES\n" : "NO\n");
  } else {
    cout << "YES\n";
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