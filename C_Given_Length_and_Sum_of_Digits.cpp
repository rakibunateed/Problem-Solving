#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ll m, s;
  cin >> m >> s;
  if ((s == 0 && m > 1) || s > 9 * m) {
    cout << "-1 -1" << endl;
    return 0;
  }
  if ((s == 0 && m == 1) || (s == 1 && m == 0)) {
    cout << "0 0" << '\n';
    return 0;
  }
  string minNum = "";
  ll sum = s;
  for (ll i = 0; i < m; i++) {
    for (ll d = (i == 0 ? 1 : 0); d <= 9; d++) {
      if (sum - d <= 9 * (m - i - 1)) {
        minNum += (char)(d + '0');
        sum -= d;
        break;
      }
    }
  }
  string maxNum = "";
  sum = s;
  for (ll i = 0; i < m; i++) {
    for (ll d = 9; d >= 0; d--) {
      if (sum - d >= 0 && sum - d <= 9 * (m - i - 1)) {
        maxNum += (char)(d + '0');
        sum -= d;
        break;
      }
    }
  }
  cout << minNum << " " << maxNum << '\n';
  return 0;
}