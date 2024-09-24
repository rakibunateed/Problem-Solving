#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;

void solve() {
    int n, count1 = 0, count2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            count1 = max(count1, count2);
            count2 = 0;
            continue;
        }
        count2++;
    }
    cout << max(count1, count2) << endl;
}
int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}