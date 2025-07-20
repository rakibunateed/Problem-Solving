#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
  set<ll> s;
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++) {
    ll a;
    cin >> a;
    s.insert(a);
  }
  if (s.size() == 1)
    cout << "NO\n";
  else
    cout << *(++s.begin()) << '\n';
}