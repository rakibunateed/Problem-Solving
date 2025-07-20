#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  ll cnt = 0;
  while (n--) {
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a == 1 && b == 1) || (b == 1 && c == 1) || (c == 1 && a == 1)) cnt++;
  }
  cout << cnt << '\n';
  return 0;
}