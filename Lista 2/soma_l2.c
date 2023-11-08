#include <stdio.h>

long int soma(long int a){

    if (a < 10){
        return a;
    } 
    
    else{
        return ((a%10) + soma(a/10));
    }
}

int main(){
    long int num;

    scanf("%ld", &num);
    printf("%ld\n", soma(num));

    return 0;
}
