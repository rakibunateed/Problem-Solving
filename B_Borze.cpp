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