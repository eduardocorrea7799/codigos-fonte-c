#include <stdio.h>

int main() {
    float altura = 0;
    float peso = 0;
    
    printf("ola vamos calcular o imc \n");

    printf("qual a sua altura?");
    scanf("%f", &altura);

    printf("qual o seu peso?");
    scanf("%f", &peso);
    

    float imc = peso / (altura*altura);

if(imc >= 18.5 && imc <=24.9 ) {
    printf("seu pesso esta normal");
}else if(imc >=25.0 && imc <=29.9) {
    printf("sobrebeso");
}else if(imc >=30.0 && imc <= 34.9) {
    printf("obesidade grau 1");
}else if(imc >=35.0 && imc <=39.9) {
    printf("obesidade grau 2");
}else if(imc >39.9) {
    printf("obesidade grau 3");
}else if(imc <18.5) {
    printf("abaixo do peso");
}

return 0;

}