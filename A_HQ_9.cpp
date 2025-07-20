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
  bool find = false;
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') find = true;
  }
  if (find)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}