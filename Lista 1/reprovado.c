#include <stdio.h>

int main(){

    int qtd, nota;
    char nome[20];

    scanf("%d", &qtd);

    for(int i=0; i<qtd; i++){
        scanf("%s %d", nome, nota);
    }

    for(int i=0; nome[i]; i++){
		
	}

	for(int i=0; i<colunas; i++){
		salva = 0;

		for (int j=0; j<linhas; j++){
			salva += campo[j][i];
		}

		if (salva > maior){ 
            maior = salva; 
        }
	}

	printf("%d\n", maior);

    return 0;
}