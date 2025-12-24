#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll a1, b1, a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;
  ll w1 = 5LL * a1 + b1;
  ll w2 = 5LL * a2 + b2;
  ll dif = w1 - w2;

  if (dif >= 0 && dif % 6 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
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