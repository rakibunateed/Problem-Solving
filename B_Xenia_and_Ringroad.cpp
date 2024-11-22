#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m;
  cin >> n >> m;
  vector<int> vec(m);
  for (int i = 0; i < m; i++) {
    cin >> vec[i];
  }
  ll count = vec[0] - 1;
  for (int i = 0; i < m - 1; i++) {
    if (vec[i] > vec[i + 1]) {
      count += n - (vec[i] - vec[i + 1]);
    } else if (vec[i] < vec[i + 1]) {
      count += vec[i + 1] - vec[i];
    }
  }
  cout << count << endl;
  return 0;
}