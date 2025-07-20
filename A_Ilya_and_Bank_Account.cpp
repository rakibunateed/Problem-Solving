#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  if (n >= 0) {
    cout << n << '\n';
  } else {
    string s = to_string(n);  // Convert number to string

    char last = s[s.length() - 1];
    char secondLast = s[s.length() - 2];

    int l = last - '0';
    int r = secondLast - '0';
    ll mxx = max(l, r);
    if (mxx == l) {
      s.erase(s.length() - 1);
      cout << s;  // Remove last digit
    } else {
      s.erase(s.length() - 2);
      cout << s;  // Remove second-last digit
    }
    // cout << s;
    // ll result = stoll(s);  // Convert the string back to a number
    // cout << result << '\n';
  }

  return 0;
}
