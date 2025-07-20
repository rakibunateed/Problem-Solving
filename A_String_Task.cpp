#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
bool toVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s, ans;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for (auto u : s) {
    if (!toVowel(u)) {
      ans += '.';
      ans += u;
    }
  }
  cout << ans << '\n';
  return 0;
}