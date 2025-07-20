#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s1, s2, result;
  cin >> s1 >> s2;
  for (ll i = 0; i < s1.length(); i++) {
    result += ((s1[i] - '0') ^ (s2[i] - '0')) + '0';
  }
  cout << result;
  return 0;
}