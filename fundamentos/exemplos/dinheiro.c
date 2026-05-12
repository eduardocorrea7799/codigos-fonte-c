#include <stdio.h>
int main(){
    float salario = 0;
    int tempoMesses = 0;
    const float porcetagem = 0.25;
    const float juros = 0.068;

    printf("Qual seu salario?");
    scanf("%f", &salario);

    printf("Quanto tempo voce guardara seu dinheiro?");
    scanf("%i", &tempoMesses);

    float totalJurosPercentual = tempoMesses *juros;
    float salario25 = salario * porcetagem;
    float totalDinheiro = tempoMesses * salario25;
    float totalJurosValor = totalDinheiro * totalJurosPercentual;
    float totalComJuros = totalJurosValor + totalDinheiro;

    printf("Total juros em %.2f \n", totalJurosPercentual);
    printf("Valor guardado sem juros R$ %.2f \n", totalDinheiro);
    printf("meses %i \n", tempoMesses);
    printf("valor do juros do banco R$ %.2f \n", totalJurosValor);
    printf("valor guardado com juros R$ %.2f", totalComJuros);

    return 0;
}
