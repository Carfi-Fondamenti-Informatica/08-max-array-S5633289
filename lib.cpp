//
// Created by Davide on 02/12/2022.
//
#include "lib.h"
#include <iostream>

using namespace std;

float maggiore(int n) {
    float numeri[n];
    for (int i = 0; i < n; i++) {
        cout << "inserisci il numero:";
        cin >> numeri[i];
    }
    float cont = numeri[0];
    for (int i = 0; i < n; i++) {
        if (numeri[i] > cont) {
            cont = numeri[i];
        }
    }
    return cont;
}
