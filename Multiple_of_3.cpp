#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n;
  cin >> n;
  if (n % 3 == 0) {
    cout << n << '\n';
  } else if ((n - 1) % 3 == 0) {
    cout << n - 1 << '\n';
  } else if ((n + 1) % 3 == 0) {
    cout << n + 1 << '\n';
  } else {
    cout << "0\n" << '\n';
  }
  return 0;
}