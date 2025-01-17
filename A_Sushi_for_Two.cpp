#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int a[n];
  int count01 = 0, count11 = 0, count02 = 0, count22 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == 2) {
      count01 = max(count01, count11);
      count11 = 0;
      continue;
    }
    count11++;
  }
  int count1 = max(count01, count11);
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      count02 = max(count02, count22);
      count22 = 0;
      continue;
    }
    count22++;
  }
  int count2 = max(count02, count22);
  cout << min(count1, count2) * 2 << endl;
  return 0;
}