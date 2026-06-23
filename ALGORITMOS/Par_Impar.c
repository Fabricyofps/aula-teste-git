#include <stdio.h>

int ehpar(int numero){
    if (numero % 2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int resultado;

    resultado = ehpar(5);

    if (resultado == 1){
        printf("Número PAR");
    } else {
        printf("Número ÍMPAR");
    }
    
    return 0;
}