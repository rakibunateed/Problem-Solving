#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a, b, count = 0;
  cin >> a >> b;
  ll pair = min(a, b);
  ll wear = max(a, b) - pair;
  while (wear >= 2) {
    count++;
    wear -= 2;
  }
  cout << pair << " " << count << '\n';
  return 0;
}