#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  string s;
  cin >> s;
  ll sum1 = 0, sum2 = 0;
  for (int i = 0; i < 3; i++) {
    sum1 += s[i];
  }
  for (int i = 3; i < 6; i++) {
    sum2 += s[i];
  }
  if (sum1 == sum2) {
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