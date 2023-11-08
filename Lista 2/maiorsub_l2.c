#include <stdio.h>
#include <string.h>

int maiorsub(char *str, char *sub, int indice, int indicesub, int tamsub, int tam) {
    if (indice == 0 || indicesub == 0) {
        return tam;
    }

    if (str[indice-1] == sub[indicesub-1]) {
        return maiorsub(str, sub, indice-1, indicesub-1, tamsub, tam+1);
    } else {
        int salva1 = maiorsub(str, sub, indice-1, tamsub, tamsub, tam);
        int salva2 = maiorsub(str, sub, indice, indicesub-1, tamsub, tam);

        return (salva1 > salva2) ? salva1 : salva2;
    }
}

int main() {
    char str[101]; 
    char sub[101]; 
    scanf("%s", str);
    scanf("%s", sub);

    int tam = strlen(str);
    int tamsub = strlen(sub);

    printf("%d\n", maiorsub(str, sub, tam, tamsub, tamsub, 0));

    return 0;
}
