#include <stdio.h>
int main() {
    int inicio=0;
    int fim=0;
    printf("digite um numero entre maior que 0");
    scanf("%i", &inicio);

    if(inicio < 0){
        printf("numero invalido");
    }else {
        printf("digite um numero maior que %i", inicio);
        scanf("%i", &fim);
        if(fim > inicio){
            for(int i=inicio; i <=fim; i++) {
                printf("numero %i \n", i);  
            }
        }else {
            printf("numeros invalidos,\n");
            printf("inicio %i, fim %i", inicio, fim);

        }
    }
    
}