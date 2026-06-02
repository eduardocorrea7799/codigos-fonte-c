#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!");
}
void calcularMedia(float n1, float n2){
    float media = (n1 + n2) / 2;
    printf("\n a média é: %.2f", media);
}
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

  float nota1, nota2;

    ola();

    printf("digite sua primeira nota:");
    scanf("%f", &nota1);

    printf("digite sua segunda nota:");
    scanf("%f", &nota2);

    calcularMedia(nota1, nota2);



    return 0;
}