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
  for (ll i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') cout << s[i];
  }
  cout << '\n';
  return 0;
}