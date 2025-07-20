#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solution() {
  string s;
  cin >> s;
  if (s.length() > 10)
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
  else
    cout << s << '\n';
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