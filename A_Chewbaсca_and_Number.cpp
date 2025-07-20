#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  for (ll i = 0; i < s.length(); i++) {
    ll n = s[i] - '0';
    ll invert = 9 - n;
    if (s[i] >= '5') s[i] = invert + '0';
  }
  if (s[0] == '0') s[0] = '9';
  cout << s << '\n';
  return 0;
}