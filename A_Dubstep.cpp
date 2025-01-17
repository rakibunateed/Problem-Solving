#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      cout << " ";
      i += 2;
    } else {
      cout << s[i];
    }
  }
  return 0;
}