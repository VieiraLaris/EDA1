#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b && c == b){
        printf("empate\n");
    }
    else if(a != b && a != c){
        printf("A\n");
    }
    else if(b != a && b != c){
        printf("B\n");
    }
    else if(c != a && c!= b){
        printf("C\n");
    }
    
    return 0;
}