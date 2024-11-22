#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, m, count = 0;
  cin >> n >> m;
  ll a[n];
  ll b[m];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    ll index = b[i] - 1;
    if (a[index] > 0) {
      a[index]--;
    } else {
      count++;
    }
  }
  cout << count << endl;
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