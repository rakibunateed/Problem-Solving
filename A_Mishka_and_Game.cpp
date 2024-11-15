#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m, c, mishka = 0, chris = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m >> c;
    if (m > c) {
      mishka++;
    }
    if (m < c) {
      chris++;
    }
  }
  if (mishka > chris) {
    cout << "Mishka" << endl;
  } else if (mishka < chris) {
    cout << "Chris" << endl;
  } else {
    cout << "Friendship is magic!^^" << endl;
  }
  return 0;
}