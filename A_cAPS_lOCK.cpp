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
  ll sup = 0, sul = 0;
  for (auto c : s) {
    if (isupper(c)) sup++;
  }
  if (islower(s[0])) {
    for (ll i = 1; i < s.length(); i++) {
      if (isupper(s[i])) {
        sul++;
      }
    }
  }
  if (s.length() == sup) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << '\n';
  } else if (s.length() - 1 == sul) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s[0] = toupper(s[0]);
    cout << s << '\n';
  } else {
    cout << s << '\n';
  }
  return 0;
}