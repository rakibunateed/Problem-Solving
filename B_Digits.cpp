#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n, d;
  cin >> n >> d;
  cout << "1 ";
  if (n >= 3 || d % 3 == 0) cout << "3 ";
  if (d == 5) cout << "5 ";
  if (n >= 3 || d == 7) cout << "7 ";
  if (d % 9 == 0 || n >= 6 || (n >= 3 && d % 3 == 0)) cout << "9";
  cout << '\n';
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