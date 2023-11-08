#include <stdio.h>

int func(int a){
   
    if(a >= 101){
        return a - 10;
    }
    if(a <= 100){
        return func(func(a + 11));
    }
    
}

int main(){

    int num, resultado;

    while(scanf("%d", &num), num != 0){
        resultado = func(num);
        printf("f91(%d) = %d\n", num, resultado);
    }

    return 0;
}