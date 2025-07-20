#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s, s2 = "abc";
  cin >> s;
  ll cnt = 0;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] == s2[i]) cnt++;
  }
  cout << (cnt == 0 ? "NO" : "YES") << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}