#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  string s;
  cin >> s;
  int zero = 0, one = 0;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] == '0')
      zero++;
    else
      one++;
  }
  cout << abs(zero - one) << '\n';
  return 0;
}