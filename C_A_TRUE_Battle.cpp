#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  string s;
  cin >> s;
  bool find = false;
  if (s[0] == '1' || s[n - 1] == '1') {
    cout << "YES" << '\n';
    return;
  }
  for (ll i = 0; i < s.length() - 1; i++) {
    if (s[i] == '1' && s[i + 1] == '1') {
      find = true;
      break;
    }
  }
  if (find) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
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