#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  ll odd_count = (n + 1) / 2;
  if (k <= odd_count) {
    cout << 2 * k - 1 << '\n';
  } else {
    ll even_index = k - odd_count;
    cout << 2 * even_index << '\n';
  }
  return 0;
}