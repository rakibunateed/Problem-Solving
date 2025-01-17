#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x == 1)
      cnt1++;
    else if (x == 2)
      cnt2++;
    else if (x == 3)
      cnt3++;
    else
      cnt4++;
  }
  ll totalCount = cnt4;
  ll mn = min(cnt1, cnt3);
  totalCount += mn;
  cnt1 -= mn;
  cnt3 -= mn;
  totalCount += cnt3;
  totalCount += cnt2 / 2;
  if (cnt2 % 2 == 1) {
    totalCount++;
    cnt1 -= min((ll)0, cnt1);
  }
  totalCount += (cnt1 + 3) / 4;
  cout << totalCount << '\n';
  return 0;
}