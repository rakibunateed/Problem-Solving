#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    long long lessX = 0, equalX = 0, greaterX = 0;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] < x)
        lessX++;
      else if (a[i] == x)
        equalX++;
      else
        greaterX++;
    }

    if (lessX > 0 && greaterX > 0 && equalX == 0)
      cout << "No\n";
    else
      cout << "Yes\n";
  }

  return 0;
}
