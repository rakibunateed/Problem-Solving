#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m;
  cin >> n >> m;
  ll a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a, a + m);
  ll max = -1;
  ll min = a[0];
  for (int i = 0; i < n; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (min > a[i]) {
      min = a[i];
    }
  }
  cout << max - min << endl;
  return 0;
}