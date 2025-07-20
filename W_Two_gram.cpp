#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  string s;
  cin >> n >> s;
  map<string, ll> m;
  for (ll i = 0; i < s.length() - 1; i++) {
    string temp = "";
    temp += s[i];
    temp += s[i + 1];
    // sort(temp.begin(), temp.end());
    m[temp]++;
  }
  ll ans = -1;
  for (auto u : m) {
    ans = max(ans, u.second);
  }
  for (auto u : m) {
    if (ans == u.second) {
      cout << u.first << '\n';
      break;
    }
  }
  return 0;
}