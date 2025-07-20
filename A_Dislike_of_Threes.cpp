#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, count = 0;
  cin >> n;
  ll i = 1;
  while (1) {
    if (i % 3 != 0 && i % 10 != 3) {
      count++;
      if (count == n) {
        cout << i << '\n';
        break;
      }
    }
    i++;
  }
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