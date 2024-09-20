#include <bits/stdc++.h>
using namespace std;

int main() {
    int max = -1;
    int index = 0;
    int number;

    for (int i = 1; i <= 100; i++) {
        cin >> number;
        if (number > max) {
            max = number;
            index = i;
        }
    }
    cout << max << endl;
    cout << index << endl;
    return 0;
}
