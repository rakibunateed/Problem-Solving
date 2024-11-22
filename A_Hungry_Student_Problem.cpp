#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll n;
  cin >> n;
  bool find = false;
  while (true) {
    if (n == 0) {
      find = true;
      break;
    } else if (n < 0) {
      break;
    } else if (n >= 7) {
      n -= 7;
    } else {
      n -= 3;
    }
  }
  if (find) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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