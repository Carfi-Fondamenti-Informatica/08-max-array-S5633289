//
// Created by Davide on 02/12/2022.
//
#include <iostream>
#include "lib.h"

float maggiore(float numero[], int n) {

    float cont = numero[0];
    for (int i = 0; i < n; i++) {
        if (numero[i] > cont) {
            cont = numero[i];
        }
    }
    return cont;
}

