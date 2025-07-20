#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll upper = 0, lower = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') upper++;
    if (s[i] >= 'a' && s[i] <= 'z') lower++;
  }
  if (upper > lower) {
    for (auto x : s) cout << (char)toupper(x);
  } else if (upper < lower) {
    for (auto x : s) cout << (char)tolower(x);
  } else {
    for (auto x : s) cout << (char)tolower(x);
  }
  cout << '\n';
  return 0;
}