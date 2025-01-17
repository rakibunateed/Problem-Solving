#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
void solve() {
  ll n, k, count1 = 0, count2 = 0;
  cin >> n >> k;
  vi vec(n);
  for (ll i = 0; i < n; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());
  for (ll i = 0; i < n - 1; i++) {
    ll temp = vec[i + 1] - vec[i];
    cout << temp << " ";
    if (temp > k && temp != k) {
      count1 = max(count1, count2);
      count2 = 0;
      continue;
    }
    count2++;
  }
  //   cout << count1 << " " << count2 << endl;
  //   ll count = max(count1, count2);
  //   cout << n - count << '\n';
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}