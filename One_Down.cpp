#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s, t;
  cin >> n >> s >> t;
  ll s1 = 0, t1 = 0;
  for (ll i = 0; i < n; i++) {
    if (s[i] == '0' && t[i] == '1') {
      cout << "YES\n";
      return;
    }
    if (s[i] == '1') s1++;
    if (t[i] == '1') t1++;
  }
  if ((s1 - t1) % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
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