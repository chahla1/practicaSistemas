#include "arrayLength.h"
#include <stdio.h>

// No es necesario volver a declarar las funciones aqui
// Las declaraciones de las funciones ya están en arrayLength.h

int main() {
    arrayLength_t al1; // Declaramos el primer array
    arrayLength_t al2; // Declaramos el segundo array

    // Inicializamos los arrays
    initArray(&al1);
    initArray(&al2);

    // Añadimos valores a al1
    for (int i = 0; i < 10; i += 2) {
        addElement(&al1, i * 10);  // Añadimos los valores 0, 10, 20, ..., 90
    }

    // Mostramos el contenido de al1
    printArr(&al1);

    // Actualizamos posiciones impares en al1 con valores 1, 3, 5, 7, 9
    for (int i = 1; i < 10; i += 2) {
        setElement(&al1, i, i); // Actualizamos al1 en las posiciones impares
    }

    // Mostramos el contenido actualizado de al1
    printArr(&al1);

    // Copiamos posiciones pares de al1 a al2
    for (int i = 0; i < 10; i += 2) {
        // Copiamos solo los valores en posiciones pares
        addElement(&al2, al1.arrInt[i]);
    }

    // Añadimos valores 0 a 4 a al2
    for (int i = 0; i < 5; i++) {
        addElement(&al2, i); // Añadimos valores 0, 1, 2, 3, 4 a al2
    }

    // Mostramos el contenido de al2
    printArr(&al2);

    return 0;
}
