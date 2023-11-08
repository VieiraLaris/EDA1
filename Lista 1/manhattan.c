#include <stdio.h>
#include <stdlib.h>

int main(){

    int xMaria, yMaria, xReuniao, yReuniao, distX=0, distY=0, distTotal=0;

    scanf("%d %d %d %d", &xMaria, &yMaria, &xReuniao, &yReuniao);

    if(xReuniao > xMaria){
        distX = xReuniao - xMaria;
    }
    else if(xMaria > xReuniao){
        distX = xMaria - xReuniao;
    }
    else if(xMaria = xReuniao){
        distX = 0;
    }

    if(yReuniao > yMaria){
        distY = yReuniao - yMaria;
    }
    else if(yMaria > yReuniao){
        distY = yMaria - yReuniao;
    }
    else if(yMaria = yReuniao){
        distY = 0;
    }

    distTotal = distX + distY;

    printf("%d\n", distTotal);
  
    return 0;
}