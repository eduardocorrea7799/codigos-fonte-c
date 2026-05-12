#include <stdio.h>
int main() {

float valorCarro = 0;
int parcelas = 0;
const float entrada30 = 0.30;

printf("Qual o valor do carro?");
scanf("%f", &valorCarro);

printf("Quantas parcelas deseja pagar?");
scanf("%i", &parcelas);

float total = (valorCarro*entrada30);
float carroTotal = valorCarro - total;
float totalParcelas = carroTotal / parcelas;

printf("O valor da entrada e %.2f \n", total);
printf("O da parcela e %.2f", totalParcelas);

    return 0;
}