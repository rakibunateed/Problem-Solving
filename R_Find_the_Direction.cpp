#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  ll r = n % 4;
  if (r == 1) {
    cout << "East\n";
  } else if (r == 3) {
    cout << "West\n";
  } else if (r == 2) {
    cout << "South\n";
  } else {
    cout << "North\n";
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