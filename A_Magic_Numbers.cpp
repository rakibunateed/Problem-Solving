#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  for (ll i = 0; i < s.length();) {
    if (s[i] == '1') {
      if (i + 2 < s.length() && s[i + 1] == '4' && s[i + 2] == '4')
        i += 3;
      else if (i + 1 < s.length() && s[i + 1] == '4')
        i += 2;
      else
        i += 1;
    } else {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
