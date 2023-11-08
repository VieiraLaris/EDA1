#include <stdio.h>

int main() {
    int valor, limite;
    int soma = 0;
    int valor_ultrapassou = 0;

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;  
        }

        if (soma + valor <= limite) {
            soma += valor;
        } else {
            valor_ultrapassou = valor;
            soma = valor;
        }
    }

    scanf("%d", &limite);

    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break;  
        }

        if (soma + valor <= limite) {
            soma += valor;
        } else {
            valor_ultrapassou = valor;
            soma = valor;
        }
    }

    printf("%d\n", valor_ultrapassou);

    return 0;
}
