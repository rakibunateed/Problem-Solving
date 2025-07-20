#include <bits/stdc++.h>
using namespace std;
using int128 = __int128;
using uint128 = unsigned __int128;
using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;
using ld = long double;

int128 gcd(int128 a, int128 b) { return b == 0 ? a : gcd(b, a % b); }
int128 lcm(int128 a, int128 b) { return (a / gcd(a, b)) * b; }
istream& operator>>(istream& in, int128& x) {
  string s;
  in >> s;
  x = 0;
  bool neg = false;
  int i = 0;
  if (s[0] == '-') {
    neg = true;
    i = 1;
  }
  for (; i < s.size(); ++i) {
    x = x * 10 + (s[i] - '0');
  }
  if (neg) x = -x;
  return in;
}
ostream& operator<<(ostream& out, int128 x) {
  if (x == 0) return out << '0';
  string s;
  bool neg = false;
  if (x < 0) {
    neg = true;
    x = -x;
  }
  while (x > 0) {
    s += '0' + x % 10;
    x /= 10;
  }
  if (neg) s += '-';
  reverse(s.begin(), s.end());
  return out << s;
}
void solution() {}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}