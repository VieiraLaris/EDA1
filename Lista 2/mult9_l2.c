#include <stdio.h>
#include <string.h>

int calcula_grau(char *num, int tam, int grau) {
    int soma = 0;
    char novo[1001];

    if(num[0]  - '0' == 9){
        printf("9 is a multiple of 9 and has 9-degree 1.\n");
    }

    if (tam == 1) {
        if (num[0] - '0' == 9) {
            return grau;
        } else {
            return -1;
        }
    }

    for (int i=0; i<tam; i++) {
        soma += num[i] - '0';
    }

    sprintf(novo, "%d", soma);

    return calcula_grau(novo, strlen(novo), grau+1);
}

int main() {
    char num[1001];

    while (1) {
        scanf("%s", num);

        if (num[0] == '0') {
            break;
        }

        int len = strlen(num);
        int result = calcula_grau(num, len, 1);

        if (result == -1) {
            printf("%s is not a multiple of 9.\n", num);
        } else {
            if(num[0]  - '0' == 9){
                printf("9 is a multiple of 9 and has 9-degree 1.\n");
            }
            else{
                printf("%s is a multiple of 9 and has 9-degree %d.\n", num, result-1);
            }
        }
    }

    return 0;
}
