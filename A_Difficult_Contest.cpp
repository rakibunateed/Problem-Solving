#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  string s;
  cin >> s;
  bool find = false;
  for (ll i = 0; i < s.length(); i++) {
    if ((s[i] == 'F' && s[i + 1] == 'F' && s[i + 2] == 'T') ||
        (s[i] == 'N' && s[i + 1] == 'T' && s[i + 2] == 'T')) {
      find = true;
      break;
    }
  }
  sort(s.rbegin(), s.rend());
  cout << s << '\n';
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