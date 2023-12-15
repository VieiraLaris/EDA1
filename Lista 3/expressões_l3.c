#include <stdio.h>
#include <string.h>

int pares(char *nome, int tam, int atual, int cont_parent, int cont_colchetes, int cont_chaves){

    if (atual >= tam-2) {
        if(cont_parent == 0 && cont_colchetes == 0 && cont_chaves == 0){
            return -1;
        }
        else{
            return 0;
        }  
    }

    if (nome[atual] == '('){
        cont_parent++;
    } 
    if (nome[atual] == ')'){
        cont_parent--;
    } 

    if (nome[atual] == '['){
        cont_colchetes++;
    } 
    if (nome[atual] == ']'){
        cont_colchetes--;
    } 

    if (nome[atual] == '{'){
        cont_chaves++;
    } 
    if (nome[atual] == '}'){
        cont_chaves--;
    }

    return pares(nome, tam, atual+1, cont_parent, cont_colchetes, cont_chaves);
}

int main(){
    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        char nome[2001]; 
        scanf("%s", nome);

        int tam = strlen(nome);
        int resultado = pares(nome, tam, 0, 0, 0, 0);

        if(resultado == -1){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}