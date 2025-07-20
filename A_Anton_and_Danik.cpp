#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, anton = 0, danik = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'D')
      danik++;
    else
      anton++;
  }
  if (anton > danik)
    cout << "Anton\n";
  else if (danik > anton)
    cout << "Danik\n";
  else
    cout << "Friendship\n";
  return 0;
}