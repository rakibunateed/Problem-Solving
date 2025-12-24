#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
const ll Mx = 1e7 + 123;
bitset<Mx> isPrime;
vector<ll> prime;
void SieveOfEratosthenes() {
  isPrime[2] = 1;
  for (ll i = 3; i < Mx; i += 2) isPrime[i] = 1;
  ll sq = sqrt(Mx);
  for (ll i = 3; i <= sq; i += 2) {
    if (isPrime[i] == 0) continue;
    for (ll j = i * i; j < Mx; j += i) isPrime[j] = 0;
  }
  for (ll i = 0; i < Mx; i++)
    if (isPrime[i]) prime.push_back(i);
  return;
}
void solution() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];
  ll g = v[0];
  for (ll i = 1; i < n; i++) g = __gcd(g, v[i]);
  ll ans = -1;
  for (ll i = 0; i < 25; i++) {
    if (g % prime[i] != 0) {
      ans = prime[i];
      break;
    }
  }
  cout << ans << '\n';
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  SieveOfEratosthenes();
  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}