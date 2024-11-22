#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
char upper(char c) { return 'A' + abs(c - 'a'); }
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str;
  cin >> str;
  if (str[0] >= 'a' && str[0] <= 'z') {
    str[0] = upper(str[0]);
  }
  cout << str << endl;
  return 0;
}