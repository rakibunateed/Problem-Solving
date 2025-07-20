#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  while (1) {
    n++;
    string s = to_string(n);
    set<char> digit(s.begin(), s.end());
    if (digit.size() == s.size()) {
      cout << n << '\n';
      break;
    }
  }
  return 0;
}