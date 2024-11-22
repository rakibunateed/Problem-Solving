#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll k;
  cin >> k;
  ll n = 12;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end(), greater<int>());
  ll count = 0, sum = 0;
  bool find = false;
  for (int i = 0; i < v.size(); i++) {
    if (k <= 0) {
      break;
    }
    sum += v[i];
    count++;
    if (sum >= k) {
      find = true;
      break;
    }
  }
  if (count == 0) {
    cout << "0" << endl;
  } else if (find) {
    cout << count << endl;
  } else {
    cout << "-1" << endl;
  }
  return 0;
}