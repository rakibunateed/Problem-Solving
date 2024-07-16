#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool found_even = false;
    
    for (int i = 1; i <= N; i ++) {
        if (i % 2 == 0)
        {
            cout << i << endl;
        } 
    }
    if (!found_even) {
        cout << -1 << endl;
    }
    return 0;
}