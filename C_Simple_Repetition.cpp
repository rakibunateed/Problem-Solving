#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007  // Corrected mod value as an integer constant
typedef long long int ll;

// Efficient primality test
bool isPrime(ll p) {
  if (p <= 1) return false;
  for (ll i = 2; i * i <= p; i++) {  // Check up to sqrt(p)
    if (p % i == 0) return false;
  }
  return true;
}

void solution() {
  ll n, k;
  cin >> n >> k;

  // Calculate the number of digits in n
  ll numDigits = to_string(n).size();

  // Now we will build the number without constructing it completely:
  ll result = 0;

  // Construct the repeated number using modular arithmetic
  for (ll i = 0; i < k; i++) {
    // Add the number to the result, shifting it to the left by numDigits
    result = (result * pow(10, numDigits) + n) % mod;
  }

  // Check if the resulting number is prime
  cout << (isPrime(result) ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  cin >> t;
  while (t--) solution();
  return 0;
}
