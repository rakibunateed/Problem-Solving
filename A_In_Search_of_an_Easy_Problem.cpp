#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, count = 0;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  for (int i = 0; i < n; i++) {
    if (vec[i] == 1) {
      count++;
    }
  }
  if (count >= 1) {
    cout << "HARD" << '\n';
  } else {
    cout << "EASY" << '\n';
  }
  return 0;
}