#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  if (vec[0] != vec[1]) {
    if (vec[0] != vec[2]) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  } else {
    for (int i = 2; i < n; i++) {
      if (vec[i] != vec[0]) {
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