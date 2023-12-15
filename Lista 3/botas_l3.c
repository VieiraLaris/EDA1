#include <stdio.h>

int main(){
    int tam, cont_geral=0;
    int cont_right[61]={0};
    int cont_left[61]={0};
    char bota;

    while(scanf("%d %c", &tam, &bota) != EOF){
        if (bota == 'E'){
            cont_left[tam]++;
        }
        else if(bota == 'D'){
            cont_right[tam]++;
        }
    }

    for (int i=30; i<=60; i++){
        if (cont_right[i] < cont_left[i]){
            cont_geral = cont_geral + cont_right[i];
        }
        else{
            cont_geral = cont_geral + cont_left[i];
        }
    }

    printf("%d\n", cont_geral);

    return 0;
}

