#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n = 10;
  ll a = 0;
  ll b = 1;
  cout << a << " " << b;
  for (ll i = 3; i <= n; i++) {
    ll sum = a + b;
    a = b;
    b = sum;
    cout << " " << sum;
  }

  return 0;
}