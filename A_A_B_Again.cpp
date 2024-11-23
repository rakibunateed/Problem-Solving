#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, first;
  cin >> n;
  first = n % 10;
  n /= 10;
  cout << first + n << endl;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}