#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, q, count = 0;
  cin >> n >> q;
  string s;
  cin >> s;
  for (int i = 0; i < q; i++) {
    int x;
    char ch;
    cin >> x >> ch;
    s[x] = ch;
    for (int i = 0; i < s.length() - 3; i++) {
      if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}