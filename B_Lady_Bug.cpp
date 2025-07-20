#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  string a, b;
  cin >> n >> a >> b;
  string ans = "YES";
  ll aOddCnt = 0, aEvenCnt = 0, bOddCnt = 0, bEvenCnt = 0;
  for (ll i = 0; i < n; i += 2) {
    if (a[i] == '0') aOddCnt++;
    if (b[i] == '0') bOddCnt++;
  }
  for (ll i = 1; i < n; i += 2) {
    if (a[i] == '0') aEvenCnt++;
    if (b[i] == '0') bEvenCnt++;
  }
  if (aOddCnt + bEvenCnt < n - n / 2)
    ans = "NO";
  else if (aEvenCnt + bOddCnt < n / 2)
    ans = "NO";
  cout << ans << '\n';
  return;
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