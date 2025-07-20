#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s1, s2;
  cin >> s1 >> s2;
  reverse(s1.begin(), s1.end());
  if (s1 == s2)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}