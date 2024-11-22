#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  s[0] = toupper(s[0]);
  cout << s << endl;
  return 0;
}