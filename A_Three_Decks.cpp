#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll s = a + b + c;
  if (s % 3 != 0)
    cout << "NO\n";
  else {
    ll x = s / 3;
    if (a <= x && b <= x && x <= c)
      cout << "YES\n";
    else
      cout << "NO\n";
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