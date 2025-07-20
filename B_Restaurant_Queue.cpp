#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ll Q;
  cin >> Q;
  queue<ll> line;
  for (ll i = 0; i < Q; ++i) {
    ll type;
    cin >> type;
    if (type == 1) {
      ll X;
      cin >> X;
      line.push(X);
    } else if (type == 2) {
      cout << line.front() << '\n';
      line.pop();
    }
  }
  return 0;
}