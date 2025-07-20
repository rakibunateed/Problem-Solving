#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s;
  cin >> n >> s;
  if (s.length() > 26) {
    cout << "NO\n";
    return;
  }

  map<char, ll> m;
  for (ll i = 0; i < n; i++) m[s[i]]++;
  for (auto u : m) {
    if (u.second >= 2) {
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