#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll a, b, count = 0, time = 0;
  cin >> a >> b;
  while (a > 0) {
    a--;
    count++;
    time++;
    if (b == count) {
      a++;
      count = 0;
    }
  }
  cout << time << '\n';
  return 0;
}