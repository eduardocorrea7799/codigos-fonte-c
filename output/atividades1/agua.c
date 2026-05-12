#include <stdio.h>


int main() {

const float valorPorLitro = 0.05;
const int qtdLitrosMulta = 400;
const int qtdLitrosDesconto = 250;
const float valorMulta = 150;
const float valorDesconto = 50;
const int periodo30 = 30;
const int faixaEconomica = 250;
const int faixaExcessiva = 400;

int qtdPessoas = 0;
float valorTotalConta = 0;
int qtdLitrosConsumida = 0;
int idade = 0;

printf("ola, vamos calcular sua conta de agua~\n");
printf("para iniciar, quantas pessoas moram na residencia");
scanf("%i", &qtdPessoas);

for (int i=0; i<qtdPessoas; i++){
printf("legal, agora qual idade da %i pessoa: ", i);
scanf("%i", &idade);

if (idade <=10) {
    qtdLitrosConsumida += 18;
}else if (idade >10 && idade <=18) {
    qtdLitrosConsumida += 30;
}else if (idade >18 && idade <=25)  {
    qtdLitrosConsumida += 42;
}else if (idade >25) {
    qtdLitrosConsumida += 24;
}
}
valorTotalConta = valorPorLitro * qtdLitrosConsumida * periodo30;

if (qtdLitrosConsumida >= faixaExcessiva){
printf("faixa de consumo: excessiva\n");
printf("total de pessoas na residencia: %i\n", qtdPessoas);
printf("quantidade consumo em litros: %i\n", qtdLitrosConsumida);
printf("valor conta mensal: R$ %.2f\n", valorTotalConta);
printf("multa aplicada: R$ %.2f\n", valorMulta);
}else if (qtdLitrosConsumida <= faixaEconomica){
printf("faixa de consumo: economica\n");
printf("total de pessoas na residencia: %i\n", qtdPessoas);
printf("quantidade consumo em litros: %i\n", qtdLitrosConsumida);
printf("valor conta mensal: R$ %.2f\n", valorTotalConta);
printf("desconto na proxima conta: R$ %.2f\n", valorDesconto);
}else {
printf("faixa de consumo: normal\n");
printf("total de pessoas na residencia: %i\n", qtdPessoas);
printf("quantidade consumo em litros: %i\n", qtdLitrosConsumida);
printf("valor conta mensal: R$ %.2f\n", valorTotalConta);
}


    return 0;
}