#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, cnt = 0;
  string s;
  cin >> n >> s;
  for (ll i = 0; i < n; i++) {
    if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
        (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
      cnt++;
      i += 2;
    }
  }
  cout << cnt << '\n';
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