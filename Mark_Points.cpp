#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string s;
  cin >> n >> s;
  bool flag = true;

  for (ll i = 0; i < n;) {
    if (s[i] == '1') {
      ll j = i;
      while (j < n && s[j] == '1') j++;
      ll len = j - i;
      if (len == 1 || len == 2) {
        flag = false;
        break;
      }
      i = j;
    } else
      i++;
  }
  cout << (flag ? "Yes" : "No") << '\n';
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