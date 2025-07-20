#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  ll od, ev;
  if (n & 1) {
    od = (n / 2) + 1;
    ev = (n / 2);
  } else {
    od = (n / 2);
    ev = (n / 2);
  }
  cout << (od * 3) - (ev * 1) << '\n';
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