#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, m, c, mishka = 0, chris = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m >> c;
    if (m > c) mishka++;
    if (m < c) chris++;
  }
  if (mishka > chris)
    cout << "Mishka\n";
  else if (mishka < chris)
    cout << "Chris\n";
  else
    cout << "Friendship is magic!^^\n";
  return 0;
}