#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  string s, find = "YES";
  cin >> s;
  ll count = 0;

  for (int i = 0; i < s.length(); i++) {
    char ch = toupper(s[i]);
    if (ch == find[i]) {
      count++;
    }
  }
  if (count == 3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}