#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  cin >> s;
  ll count0 = 0, count00 = 0, count1 = 0, count11 = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '1') {
      count0 = max(count0, count00);
      count00 = 0;
      continue;
    }
    count00++;
  }
  ll result1 = max(count0, count00);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '0') {
      count1 = max(count1, count11);
      count11 = 0;
      continue;
    }
    count11++;
  }
  ll result2 = max(count1, count11);
  if (result1 >= 7 || result2 >= 7) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
  return 0;
}