#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  ll sum = a + b + c;
  ll cycle = n / sum;
  ll count = cycle * 3;
  n %= sum;
  if (n > 0) {
    n -= a;
    count++;
  }
  if (n > 0) {
    n -= b;
    count++;
  }
  if (n > 0) {
    n -= c;
    count++;
  }
  cout << count << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}