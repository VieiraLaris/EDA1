#include <stdio.h>

int main(){

    int largura_cont, comp_cont, altura_cont, largura_navio, comp_navio, altura_navio, qtd_total=0;

    scanf("%d %d %d", &largura_cont, &comp_cont, &altura_cont);
    scanf("%d %d %d", &largura_navio, &comp_navio, &altura_navio);

    qtd_total = (largura_navio/largura_cont)*(comp_navio/comp_cont)*(altura_navio/altura_cont);
    
    printf("%d\n", qtd_total);
    
    return 0;
}