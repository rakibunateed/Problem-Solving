#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s;
  cin >> s;
  ll n = s.length();
  ll cnt = 0;
  bool flag = false;
  for (ll i = n - 1; i >= 0; i--) {
    if (s[i] != '0')
      flag = true;
    else if (flag)
      cnt++;
  }
  cout << n - (cnt + 1) << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}