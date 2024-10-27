#ifndef ARRAYLENGTH_H
#define ARRAYLENGTH_H

typedef struct {
    int arrInt[10];
    int arrSize;
    int arrAdd;
} arrayLength_t;

// Declaración de las funciones
int initArray(arrayLength_t *arr);
void printArr(const arrayLength_t *arr);
int addElement(arrayLength_t *arr, int newValue);
int setElement(arrayLength_t *arr, int position, int value);

#endif // ARRAYLENGTH_H
