#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] == '.') {
      cout << "0";
    } else if (s[i] == '-' && s[i + 1] == '.') {
      cout << "1";
      i++;
    } else if (s[i] == '-' && s[i + 1] == '-') {
      cout << "2";
      i++;
    }
  }
  return 0;
}