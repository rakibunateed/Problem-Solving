#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  ll a[n];
  ll count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      count1 = max(count1, count2);
      count2 = 0;
      continue;
    }
    count2++;
  }
  cout << max(count1, count2) + 1 << endl;
  return 0;
}