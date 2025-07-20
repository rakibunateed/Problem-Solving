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
  ll cnt = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '4' || s[i] == '7') cnt++;
  }
  if (cnt == 4 || cnt == 7)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}