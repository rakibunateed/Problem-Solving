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
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            cout << "I hate";
        } else {
            cout << "I love";
        }
        if (i != n) {
            cout << " that ";
        }
    }
    cout << " it" << endl;
    return 0;
}
