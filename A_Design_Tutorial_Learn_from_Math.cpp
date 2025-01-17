#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
bool composite(int n) {
  if (n <= 1) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return true;
    }
  }
  return false;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  for (ll i = 4; i <= n / 2; i++) {
    ll j = n - i;
    if (composite(i) && composite(j)) {
      cout << i << " " << j << '\n';
      break;
    }
  }
  return 0;
}