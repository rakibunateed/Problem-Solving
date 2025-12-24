#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s, t;
  cin >> n >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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