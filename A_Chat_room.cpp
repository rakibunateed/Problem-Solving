#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s, find = "hello";
  cin >> s;
  ll j = 0, count = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == find[j]) {
      count++;
      j++;
    }
  }
  if (count >= 5) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}