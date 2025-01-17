#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  string s;
  cin >> n >> s;
  ll a = 0, b = 0, c = 0;
  for (int i = 0; i < s.length(); i++) {
    if (a >= 1 && b >= 1 && c >= 1) {
      break;
    } else if (s[i] == 'A') {
      a++;
    } else if (s[i] == 'B') {
      b++;
    } else if (s[i] == 'C') {
      c++;
    }
  }
  ll count = a + b + c;
  cout << count << '\n';
  return 0;
}