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
  if (s[0] == s[2] && s[1] == 'w')
    cout << "Cute\n";
  else
    cout << "No\n";

  return 0;
}