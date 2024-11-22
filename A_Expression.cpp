#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a, b, c;
  cin >> a >> b >> c;
  ll result1 = a + b * c;
  ll result2 = a * (b + c);
  ll result3 = a * b * c;
  ll result4 = (a + b) * c;
  ll result5 = a + b + c;
  cout << max({result1, result2, result3, result4, result5});
  return 0;
}