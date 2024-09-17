#include <bits/stdc++.h>
using namespace std;

int main() {
    double salary, tax = 0.0;
    cin >> salary;

    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (salary > 4500.00) {
            tax += (salary - 4500.00) * 0.28;
            salary = 4500.00;
        }
        if (salary > 3000.00) {
            tax += (salary - 3000.00) * 0.18;
            salary = 3000.00;
        }
        if (salary > 2000.00) {
            tax += (salary - 2000.00) * 0.08;
        }
        cout << fixed << setprecision(2) << "R$ " << tax << endl;
    }
    return 0;
}
