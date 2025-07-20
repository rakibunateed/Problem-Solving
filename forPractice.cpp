// #include <bits/stdc++.h>
// using namespace std;

// typedef long long int ll;
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   cout.tie(nullptr);
//   string s = "hello";
//   char ch = *max_element(s.begin(), s.end());
//   char c = *min_element(s.begin(), s.end());
//   cout << ch << " " << c << endl;
// string s = "712";
// ll number = stoi(s), count = 0;

// for (ll i = 0; i < s.length(); i++) {
//   count++;
// }
// cout << (number / 2) << " " << count;
// ll n = 4;
// if (n & 0) {
//   cout << "even";
// } else {
//   cout << "odd";
// }
// ll n;
// cin >> n;
// map<ll, ll> m;
// vector<ll> v(n);
// for (auto u : v) {
//   cin >> u;
//   m[u]++;
// }

// for (auto u : m) {
//   cout << u.first << " " << u.second << endl;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  for (ll i = 0; i < s.length(); i++) {
    ll n = s[i] - '0';
    ll invert = 9 - n;
    if (s[i] >= '5') {
      s[i] = invert + '0';
    }
  }
  if (s[0] == '0') {
    s[0] = '9';
  }
  cout << s << endl;
  return 0;
}
//   return 0;
// }