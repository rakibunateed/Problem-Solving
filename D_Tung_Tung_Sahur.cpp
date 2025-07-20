#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solution() {
  string s1, s2;
  cin >> s1 >> s2;
  ll i = 0, j = 0;
  while (i < s1.length() && j < s2.length()) {
    if (s1[i] == s2[j]) {
      if (j + 1 < s2.length() && s2[j] == s2[j + 1]) {
        j += 2;
      } else {
        j++;
      }
      i++;
    } else {
      cout << "NO\n";
      return;
    }
  }
  if (i == s1.length() && j == s2.length()) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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