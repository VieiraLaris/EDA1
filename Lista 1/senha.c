#include <stdio.h>
#include <stdlib.h>

int main(){

    char senha[1001];
    int i=0, num_caracteres, min_minusculas, min_maiusculas, min_numeros, salva_minusculas=0, salva_maiusculas=0, salva_numeros=0, tamanho=0;
    
    scanf("%d %d %d %d", &num_caracteres, &min_minusculas, &min_maiusculas, &min_numeros);

    scanf("%s", senha);

    while(senha[i] != '\0')
    {
        if(senha[i] == 'a' || senha[i] == 'b' || senha[i] == 'c' || senha[i] == 'd' || senha[i] == 'e' || senha[i] == 'f' || senha[i] == 'g' || senha[i] == 'h' || senha[i] == 'i' || senha[i] == 'j' || senha[i] == 'k' || senha[i] == 'l' || senha[i] == 'm' || senha[i] == 'n' || senha[i] == 'o' || senha[i] == 'p' || senha[i] == 'q' || senha[i] == 'r' || senha[i] == 's' || senha[i] == 't' || senha[i] == 'u' || senha[i] == 'v' || senha[i] == 'w' || senha[i] == 'x' || senha[i] == 'y' || senha[i] == 'z'){
            salva_minusculas++;
        }

        if(senha[i] == 'A' || senha[i] == 'B' || senha[i] == 'C' || senha[i] == 'D' || senha[i] == 'E' || senha[i] == 'F' || senha[i] == 'G' || senha[i] == 'H' || senha[i] == 'I' || senha[i] == 'J' || senha[i] == 'K' || senha[i] == 'L' || senha[i] == 'M' || senha[i] == 'N' || senha[i] == 'O' || senha[i] == 'P' || senha[i] == 'Q' || senha[i] == 'R' || senha[i] == 'S' || senha[i] == 'T' || senha[i] == 'U' || senha[i] == 'V' || senha[i] == 'W' || senha[i] == 'X' || senha[i] == 'Y' || senha[i] == 'Z'){
            salva_maiusculas++;
        }

        if(senha[i] == '0' || senha[i] == '1' || senha[i] == '2' || senha[i] == '3' || senha[i] == '4' || senha[i] == '5' || senha[i] == '6' || senha[i] == '7' || senha[i] == '8' || senha[i] == '9'){
            salva_numeros++;
        }

        i++;
        tamanho ++;
    }

    /*printf("Minusculas: %d\nMaiusculas: %d\nNumeros: %d\nTamanho: %d\n", salva_minusculas, salva_maiusculas, salva_numeros, tamanho);*/

    if(salva_minusculas >= min_minusculas && salva_maiusculas >= min_maiusculas && salva_numeros >= min_numeros && tamanho >= num_caracteres){
        printf("Ok =/\n");
    }
    else{
        printf("Ufa :)\n");
    }

    return 0;
}