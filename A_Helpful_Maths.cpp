#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s, number;
  cin >> s;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] != '+') number += s[i];
  }
  sort(number.begin(), number.end());
  for (ll i = 0; i < number.length(); i++) {
    cout << number[i];
    if (i < number.length() - 1) cout << "+";
  }
  cout << '\n';
  return 0;
}