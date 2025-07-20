#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  string str;
  int count = 0;
  for (int i = 0; i < t; i++) {
    cin >> str;
    if (str == "X++" || str == "++X") {
      count++;
    }
    if (str == "X--" || str == "--X") {
      count--;
    }
  }
  cout << count << '\n';
  return 0;
}