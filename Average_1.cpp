#include <bits/stdc++.h>
using namespace std;


int main() {
    double A, B;
    cin >> A >> B;

    double average = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);


    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << average << std::endl;
    
    return 0;
}
