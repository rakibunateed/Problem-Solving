#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n = 1378;
  ll m;
  cin >> m;
  //   ll result = pow(n, m); this would not work
  ll ans = 1;
  for (int i = 0; i < m; ++i) {
    ans *= n;
  }
  cout << (ans % 10) << '\n';
  return 0;
}