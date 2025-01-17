#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
  string s;
  cin.ignore();
  getline(cin, s);
  bool seen[256] = {false};
  int distinctCount = 0;
  for (char ch : s) {
    if (isalpha(ch)) {
      if (!seen[ch]) {
        seen[ch] = true;
        distinctCount++;
      }
    }
  }
  cout << distinctCount << '\n';
  return 0;
}