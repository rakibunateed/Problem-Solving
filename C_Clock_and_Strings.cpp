#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool doesIntersect(int a, int b, int c, int d) {
    vector<int> positions = {a, b, c, d};
    sort(positions.begin(), positions.end());

    // Check if (a, b) and (c, d) are separate intervals on the clock
    if ((a == positions[0] && b == positions[1] && c == positions[2] && d == positions[3]) ||
        (c == positions[0] && d == positions[1] && a == positions[2] && b == positions[3])) {
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (doesIntersect(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
