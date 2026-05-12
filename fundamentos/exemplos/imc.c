#include <stdio.h>

int main() {
    float altura = 1.70;
    float peso = 60;
    
    printf("ola vamos calcular o imc \n");

    float resultado = peso / (altura*altura);

printf("seu imc e %f", resultado);

return 0;

}

