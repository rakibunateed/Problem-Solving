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
    unordered_map<long long, int> freq;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      freq[a[i] % x]++;  // count remainder bucket
    }

    long long mex = 0;
    while (true) {
      long long r = mex % x;
      if (freq[r] > 0) {
        freq[r]--;  // use one number from this remainder class
        mex++;
      } else {
        break;  // can't construct this mex
      }
    }
    cout << mex << "\n";
  }

  return 0;
}
