#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

  
    for (int i = 0; i < 5; i++) {
        cin >> num;
       if (num % 2 == 0)
            even_count++;
        else
            odd_count++;

        if (num > 0)
            positive_count++;
        else if (num < 0)
            negative_count++;
    }
    cout << even_count << " valor(es) par(es)" << endl;
    cout << odd_count << " valor(es) impar(es)" << endl;
    cout << positive_count << " valor(es) positivo(s)" << endl;
    cout << negative_count << " valor(es) negativo(s)" << endl;

    return 0;
}