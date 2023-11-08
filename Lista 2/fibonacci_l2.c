#include <stdio.h>

long int armazena[81];

long int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }

    if (armazena[n] != 0) {
        return armazena[n]; 
    }

    armazena[n] = fibonacci(n-1) + fibonacci(n-2);
    return armazena[n];
}

