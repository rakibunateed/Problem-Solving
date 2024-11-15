#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, total = 0, sum = 0, count = 0;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }
  sort(a, a + n, greater<int>());
  for (int i = 0; i < n; i++) {
    sum += a[i];
    ll left = total - sum;
    count++;
    if (sum > left) {
      break;
    }
  }
  cout << count << endl;
  return 0;
}