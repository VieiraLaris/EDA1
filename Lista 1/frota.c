#include <stdio.h>

int main(){

    float preco_alcool, preco_gasolina, rend_alcool, rend_gasolina;

    scanf("%f %f %f %f", &preco_alcool, &preco_gasolina, &rend_alcool, &rend_gasolina);

    if(preco_alcool/rend_alcool < preco_gasolina/rend_gasolina){
        printf("A\n");
    }
    else if(preco_alcool/rend_alcool > preco_gasolina/rend_gasolina){
        printf("G\n");
    }
    else{
        printf("G\n");
    }
    
    return 0;
}