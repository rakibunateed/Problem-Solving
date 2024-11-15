#include <bits/stdc++.h>
using namespace std;
bool composite(int num) {
  if (num <= 1) return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return 1;
  }
  return 0;
}
int main() {
  int n;
  cin >> n;

  for (int x = 4; x <= n / 2; x++) {
    int y = n - x;
    if (composite(x) && composite(y)) {
      cout << x << " " << y << endl;
      break;
    }
  }

  return 0;
}
