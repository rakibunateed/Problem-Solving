#include <iostream>
#include <string> 

using namespace std;

int main() {
    // Input two strings
    string str1, str2;
    cin >> str1 >> str2;

    // Compare each character
    for (int i = 0; i < str1.length(); i++) {
        char c1 = str1[i], c2 = str2[i];

        // Convert uppercase letters to lowercase
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 += ('a' - 'A');
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 += ('a' - 'A');
        }

        if (c1 < c2) {
            cout << "-1" << endl;
            return 0;
        }
        else if (c1 > c2) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}
