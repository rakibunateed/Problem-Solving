#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a, b, cnt = 0;
  cin >> a >> b;
  if (a < b) {
    cout << b - a << '\n';
    return;
  }
  ll result = abs((a % b) - (b % a));
  cout << result % b << '\n';
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