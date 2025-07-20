#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  char ans = 'a';
  for (auto c : s) {
    if (c == ans)
      ans++;
    else if (c > ans)
      break;
  }
  cout << ans << '\n';
  return 0;
}