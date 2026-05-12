#include <stdio.h>

int main() {
    float altura = 0;
    float peso = 0;
    
    printf("ola vamos calcular o imc \n");

    printf("qual a sua altura?");
scanf("%f" , &altura);

    printf("qual o seu peso?");
scanf("%f" , &peso);

    float resultado = peso / (altura*altura);

printf("seu imc e %f", resultado);

return 0;

}