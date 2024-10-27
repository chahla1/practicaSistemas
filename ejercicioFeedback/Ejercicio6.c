#include "arrayLength.h"
#include <stdio.h>

int getElement(const arrayLength_t *arr, int position) {
    if (position < 0 || position >= 10 || arr->arrInt[position] == -1) {
        return -1;  // Verificamos que la posicion sea valida y tenga un valor positivo
    }
    return arr->arrInt[position];
}


