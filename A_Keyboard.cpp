#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char ch;
  string t;
  cin >> ch >> t;
  for (ll i = 0; i < t.length(); i++) {
    for (ll j = 0; j < s.length(); j++) {
      if (t[i] == s[j]) {
        if (ch == 'R')
          cout << s[j - 1];
        else
          cout << s[j + 1];
      }
    }
  }
  cout << '\n';
  return 0;
}