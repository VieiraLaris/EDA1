#include <stdio.h>

int main(){

    int dist_total, dist_pedag, custo_km, valor_pedag, custo_total;

    scanf("%d %d", &dist_total, &dist_pedag);
    scanf("%d %d", &custo_km, &valor_pedag);

    custo_total = custo_km*dist_total + (dist_total/dist_pedag)*valor_pedag;
    
    printf("%d\n", custo_total);
    
    return 0;
}