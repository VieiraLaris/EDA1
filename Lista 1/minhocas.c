#include <stdio.h>

int main(){

    int linhas, colunas, maior=0, salva;

    int campo[100][100];

    scanf("%d %d", &linhas, &colunas);
   
    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            scanf("%d", &campo[i][j]);
        }
    }

    for(int i=0; i<linhas; i++){
		salva = 0;

		for (int j=0; j<colunas; j++){
			salva += campo[i][j];
		}

		if (salva > maior){	
            maior = salva; 
        }
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