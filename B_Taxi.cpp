#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll mx = 2e5 + 123;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
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
  cnt2 = cnt2 * 2 % 4;
  ll thirdSum = cnt2 + cnt1;
  if (thirdSum % 4 == 0)
    totalCount += thirdSum / 4;
  else
    totalCount += (thirdSum / 4) + 1;
  cout << totalCount << '\n';
  return 0;
}