#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s, t;
  cin >> n >> s >> t;
  if (s == t) {
    cout << "0\n";
    return;
  }
  vector<ll> v;
  ll cnt = 0;
  for (ll i = 0, j = 0; i < s.length() - 1; i++, j++) {
    if (s[i + 1] != t[j + 1]) {
      if (s[i + 1] == '0') {
        s[i + 1] = '1';
      } else {
        s[i + 1] = '0';
      }
      cnt++;
      v.push_back(i + 1);
    }
  }
  if (s != t) {
    cout << "-1\n";
    return;
  }
  cout << cnt << '\n';
  reverse(v.begin(), v.end());
  for (auto u : v) {
    cout << u << " ";
  }
  cout << '\n';
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