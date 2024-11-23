#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, t, sum = 0, count = 0, j = 0;
  cin >> n >> t;
  vi vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  for (int i = 0; i < n; i++) {
    sum += vec[i];
    if (sum <= t) {
      count++;
    } else {
      sum -= vec[j];
      j++;
    }
  }
  cout << count << endl;
  return 0;
}