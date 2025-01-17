#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
void solve() {
  ll n, count = 0, i = 0;
  string s;
  cin >> n >> s;
  for (ll i = 0; i < n; i++) {
    if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
        (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
      count++;
      i += 2;
    }
  }
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