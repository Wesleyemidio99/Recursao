#include <stdio.h>

void numerosImpares(int numero, int parada){
    if(numero%2 == 0){
        numero += 1;
    } //verificação de numero par
    if(parada != 0) {
        printf("%d\n", numero);
        numerosImpares(numero + 2, parada - 1);
    }
}

void exercicioDois(int numero,int parada){
    if(parada != 0){
        printf("%d\n",numero);
        numero+=1;
        exercicioDois( (numero *numero), parada - 1);
    }
}

int main() {
    //numerosImpares(2,10);
    exercicioDois(1,5);
    return 0;
}

