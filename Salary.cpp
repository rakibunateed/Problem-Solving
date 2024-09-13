#include <bits/stdc++.h>
using namespace std;

int main() {
    int employeeNumber, workedHours;
    double hourlyRate, salary;

    cin >> employeeNumber >> workedHours >> hourlyRate;
    salary = workedHours * hourlyRate;
    cout << "NUMBER = " << employeeNumber << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;
    return 0;
}
