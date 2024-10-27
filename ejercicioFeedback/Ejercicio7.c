#include "arrayLength.h"
#include <stdio.h>

int setElement(arrayLength_t *arr, int position, int value) {
    if (position < 0 || position >= 10 || value < 0) {
        return -1;  //  Aqui vamos a verificar que la posicion y el valor sean validos
    }

    // Actualizamos el valor y la suma total
    arr->arrAdd -= arr->arrInt[position];  // vamos a restar el valor anterior de arrAdd
    arr->arrInt[position] = value;  // Ahora asignamos el nuevo valor
    arr->arrAdd += value;  // Sumamos el nuevo valor a arrAdd

    return 0;
}

