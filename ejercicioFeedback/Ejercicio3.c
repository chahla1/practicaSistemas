#include "arrayLength.h"
#include <stdio.h>

int addElement(arrayLength_t *arr, int newValue) {
    if (newValue < 0) return -1;  // Verificamos que el nuevo valor sea positivo

    // Verificamos si hay espacio en el array
    if (arr->arrSize >= 10) return -1;

    // ahora añadimos el valor y actualizamos el tamaño y la suma
    arr->arrInt[arr->arrSize] = newValue;
    arr->arrSize++;
    arr->arrAdd += newValue;

    return 0;
}
