#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int n;
    cout << "inserisci la dimensione del vettore:";
    cin >> n;
    if (n > 0) {
        float numeri[n];
        for (int i = 0; i < n; i++) {
            cout << "inserisci un numero:";
            cin >> numeri[i];
        }
        cout << maggiore(numeri, n);
    }
    return 0;
}
