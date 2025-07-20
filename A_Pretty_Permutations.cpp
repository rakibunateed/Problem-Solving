#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
void solution() {
  ll n;
  cin >> n;
  ll a[n];
  for (ll i = 0; i < n; i++) a[i] = i + 1;
  if (n & 1) {
    swap(a[n - 1], a[n - 2]);
    for (ll i = 0; i < n - 1; i++) {
      swap(a[i], a[i + 1]);
      i++;
    }
  } else {
    for (ll i = 0; i < n - 1; i++) {
      swap(a[i], a[i + 1]);
      i++;
    }
  }
  for (ll i = 0; i < n; i++) cout << a[i] << " ";
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