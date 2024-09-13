#include <bits/stdc++.h>
using namespace std;

int maior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maior_ab = maior(a, b);
    int maior_abc = maior(maior_ab, c);

    cout << maior_abc << " eh o maior" << endl;
    
    return 0;
}
