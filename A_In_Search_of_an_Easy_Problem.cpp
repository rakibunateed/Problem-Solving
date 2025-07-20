#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll n, count = 0;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) cin >> vec[i];
  for (int i = 0; i < n; i++) {
    if (vec[i] == 1) count++;
  }
  if (count >= 1)
    cout << "HARD" << '\n';
  else
    cout << "EASY" << '\n';
  return 0;
}