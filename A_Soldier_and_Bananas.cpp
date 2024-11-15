#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll k, n, w;
  cin >> k >> n >> w;
  ll total = 0;
  for (int i = 1; i <= w; i++) {
    total += (i * k);
  }
  if (total > n) {
    ll need = total - n;
    cout << need << endl;
  } else {
    cout << "0" << endl;
  }
  return 0;
}