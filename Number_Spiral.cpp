#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, m;
  cin >> n >> m;
  ll a[5][5] = {{1, 2, 9, 10, 25},
                {4, 3, 8, 11, 24},
                {5, 6, 7, 12, 23},
                {16, 15, 14, 13, 22},
                {17, 18, 19, 20, 21}};
  cout << a[n - 1][m - 1] << '\n';
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