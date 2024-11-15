#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll upper = 0, lower = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      upper++;
    }
    if (s[i] >= 'a' && s[i] <= 'z') {
      lower++;
    }
  }
  if (upper > lower) {
    for (auto x : s) {
      cout << (char)toupper(x);
    }
  } else if (upper < lower) {
    for (auto x : s) {
      cout << (char)tolower(x);
    }
  } else {
    for (auto x : s) {
      cout << (char)tolower(x);
    }
  }
  return 0;
}