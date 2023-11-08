#include <stdio.h>
#include <stdlib.h>

int main(){

    int qtd, i;

    scanf("%d", &qtd);

    for(i=1; i<=qtd; i++){
        if(i%2 != 0){
            printf("THUMS THUMS THUMS\n");
        }
        else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }
     
    return 0;
}