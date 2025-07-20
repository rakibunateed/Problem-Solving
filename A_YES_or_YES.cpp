#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s, find = "YES";
  cin >> s;
  ll cnt = 0;
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] == find[i]) cnt++;
  }
  cout << (cnt == 3 ? "YES\n" : "NO\n");
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