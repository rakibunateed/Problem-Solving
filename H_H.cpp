#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n;
  cin >> n;
  vi vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  int k = 0;
  for (int i = 1; i < n - 1; ++i) {
    if (vec[i - 1] == 1 && vec[i + 1] == 1 && vec[i] == 0) {
      k++;
      vec[i + 1] = 0;
    }
  }
  cout << k << '\n';
  return 0;
}