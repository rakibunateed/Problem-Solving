#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m;
  cin >> n, m;
  ll a[m];
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cout << a[i] << " ";
  }

  return 0;
}