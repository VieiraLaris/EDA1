#include <stdio.h>

void swap(int *a, int *b){

    int salva;

    salva = *a;
    *a = *b;
    *b = salva;

}
