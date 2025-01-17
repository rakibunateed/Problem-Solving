#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll mx = 2e8 + 12;
bool isPerfectSquare[mx];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++) {
    isPerfectSquare[i * i] = 1;
  }
  ll count = 0;
  for (ll a = 1; a <= n; a++) {
    for (ll b = a; b <= n; b++) {
      ll v = (a * a) + (b * b);
      if (isPerfectSquare[v]) {
        count++;
      }
    }
  }
  cout << count << "\n";
  return 0;
}