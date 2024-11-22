#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
  ll n;
  cin >> n;
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    vec.push_back(x);
  }
  for (int i = 0; i < n - 1; i++) {
    if (vec[i] - vec[i + 1] == 1) {
      swap(vec[i + 1], vec[i]);
    }
  }
  if (is_sorted(vec.begin(), vec.end())) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
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