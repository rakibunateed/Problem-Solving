#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a, b, c;
  cin >> a >> b >> c;
  ll result1 = a + b * c;
  ll result2 = a * (b + c);
  ll result3 = a * b * c;
  ll result4 = (a + b) * c;
  ll result5 = a + b + c;
  cout << max({result1, result2, result3, result4, result5}) << '\n';
  return 0;
}