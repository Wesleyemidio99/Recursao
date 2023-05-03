#include <stdio.h>


//Exercicio 1
void numerosImpares(int numero, int parada){
    if(numero%2 == 0){
        numero += 1;
    } //verificação de numero par
    if(parada != 0) {
        printf("%d\n", numero);
        numerosImpares(numero + 2, parada - 1);
    }
}

//Exercicio 2
void exercicioDois(int numero,int parada){
    if(parada != 0){
        printf("%d\n",numero);
        numero+=1;
        exercicioDois( (numero *numero), parada - 1);
    }
}


//Exercicio 3
int numeroExponencial(int base, int expoente){
    if(expoente > 1){
        return base * numeroExponencial( base,expoente -1);
    }
    return base;
}


//Exercicio 4
double jurosComposto(double valor, double juros, int meses){
    if(meses == 1) {
        return valor * juros;
    }
    else{
        return juros * jurosComposto(valor,juros,meses-1);

    }
}

int main() {

    //numerosImpares(2,10);
    //exercicioDois(1,5);
    //printf("%d",numeroExponencial(2,5));
    printf("%.2f",jurosComposto(1000.00,1.01,12));

    return 0;
}

