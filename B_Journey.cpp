#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  ll sum = a + b + c;
  ll cycle = n / sum;
  ll count = cycle * 3;
  n %= sum;
  if (n > 0) {
    n -= a;
    count++;
  }
  if (n > 0) {
    n -= b;
    count++;
  }
  if (n > 0) {
    n -= c;
    count++;
  }
  cout << count << '\n';
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