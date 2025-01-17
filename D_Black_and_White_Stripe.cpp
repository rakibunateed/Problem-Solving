#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, k, count1 = 0, count2 = 0, countB = 0;
  string s;
  cin >> n >> k >> s;
  for (ll i = 0; i < n; i++) {
    if (s[i] == 'W') {
      count1 = max(count1, count2);
      count2 = 0;
      continue;
    }
    count2++;
    if (s[i] == 'B') {
      countB++;
    }
  }
  ll count = max(count1, count2);
  ll extra1 = k - count;
  ll extra2 = k - countB;
  cout << count << '\n';
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