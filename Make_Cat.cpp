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
  sort(s.begin(), s.end());
  if (s[0] == 'a' && s[1] == 'c' && s[2] == 't')
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}