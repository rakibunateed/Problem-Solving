#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a1, a2, a4, a5;
  cin >> a1 >> a2 >> a4 >> a5;
  ll first = a1 + a2;
  ll second = a4 - a2;
  ll third = a5 - a4;
  ll max = 0;
  for (ll i = 1; i <= 3; i++) {
    ll a3;
    if (i == 1)
      a3 = first;
    else if (i == 2)
      a3 = second;
    else
      a3 = third;
    ll cnt = 0;
    if (a3 == a1 + a2) cnt++;
    if (a4 == a2 + a3) cnt++;
    if (a5 == a3 + a4) cnt++;
    if (cnt > max) max = cnt;
  }
  cout << max << '\n';
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