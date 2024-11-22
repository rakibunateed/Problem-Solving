#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' &&
        s[i] != 'u' && s[i] != 'i') {
      cout << "." << s[i];
    }
  }
  cout << endl;
  return 0;
}