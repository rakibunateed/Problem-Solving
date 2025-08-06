#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
void solution() {
  ll a, b, k;
  cin >> a >> b >> k;
  ll res1 = (a + k - 1) / k;
  ll res2 = (b + k - 1) / k;
  ll mx = max(res1, res2);
  ll g = __gcd(a, b);
  if (g >= mx)
    cout << "1\n";
  else
    cout << "2\n";
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
