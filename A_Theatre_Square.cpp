#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m, a, w, l;
  cin >> n >> m >> a;
  if (n % a != 0)
    w = (n / a) + 1;
  else
    w = n / a;
  if (m % a != 0)
    l = (m / a) + 1;
  else
    l = m / a;
  cout << w * l << '\n';
  return 0;
}