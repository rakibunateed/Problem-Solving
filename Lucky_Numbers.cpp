#include <iostream>
using namespace std;


bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    bool found = false;
    for (int i = A; i <= B; ++i) {
        if (isLucky(i)) {
            if (found) {
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
    cout << endl;

    return 0;
}
