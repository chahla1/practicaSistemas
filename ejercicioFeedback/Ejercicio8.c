#include "arrayLength.h"
#include <stdio.h>

// No redefinimos initArray aqui
// Vamos a usar la funcion que ya esta definida en Ejercicio2.c

int resetArr(arrayLength_t *arr) {
    return initArray(arr);  // Reutilizamos initArray para reiniciar el array
}
