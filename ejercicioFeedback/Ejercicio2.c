#include "arrayLength.h"
#include <stdio.h>

int initArray(arrayLength_t *arr) {
    for (int i = 0; i < 10; i++) {
        arr->arrInt[i] = -1;  // Inicializamos el array con el -1
    }
    arr->arrSize = 0;  // Inicializamos arrSize a 0
    arr->arrAdd = 0;   // Inicializamos arrAdd a 0
    return 0;
}

void printArr(const arrayLength_t *arr) {
    printf("{[");
    for (int i = 0; i < 10; i++) {
        printf("%d", arr->arrInt[i]);
        if (i < 9) printf(", ");
    }
    printf("], %d, %d}\n", arr->arrSize, arr->arrAdd);
}
