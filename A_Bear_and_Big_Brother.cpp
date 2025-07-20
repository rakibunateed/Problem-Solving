#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a, b;
  cin >> a >> b;
  ll cnt = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    cnt++;
  }
  cout << cnt << '\n';
  return 0;
}