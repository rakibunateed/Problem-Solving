#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (a[0] != a[1]) {
    if (a[0] != a[2]) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    for (int i = 2; i < n; i++) {
      if (a[i] != a[0]) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
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