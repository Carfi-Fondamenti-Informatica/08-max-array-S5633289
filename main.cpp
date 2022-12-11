#include <iostream>
#include "lib.h"

using namespace std;


int main() {
    int n;
    cin >> n;
    float numeri[n];
    for (int i = 0; i < n; i++) {
        cin >> numeri[i];
    }
    cout << maggiore(numeri, n);
    return 0;
}
