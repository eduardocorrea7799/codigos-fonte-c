#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    char carro[30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;
    const char cupons[3][30] = {
        "EC_10", "EC_20", "EC_30"
    };  
    char cupomCliente [30];
    int  temCupom = 0;
    float valorDesconto =0;

    printf("ola seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("obrigado por escolher nossa loja, %s", nome);

    printf("\n%s, qual carro vc deseja alugar?", nome);
    scanf("%s",carro);

    printf("\n quantos KMs vc vai rodar com o %s ?",carro);
    scanf("%i", &km);

    printf("para mostrar um relatorio detalahdo diga quanstos dias vai precisar do carro");
    scanf("%i", &dias);

    printf("%s, tem cupom de desconto? 1->sim, 0->não", nome);
    scanf("%i", &temCupom);
    if(temCupom == 1){
        printf("digite o codigo: ");
        scanf("%s", cupomCliente);

        for(int i=0; i < 3; i++){ 
            if(strcmp(cupomCliente, "EC_10") == 0){
                valorDesconto = 10;
            }
            if(strcmp(cupomCliente, "EC_20") == 0){
                valorDesconto = 20;
            }
            if(strcmp(cupomCliente, "EC_30") == 0){
                valorDesconto = 30;
            }
        }
    }

    totalPorKm = km * VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    printf("%s, segue um relatorio detalhado", nome);
    printf("\ntotal por KM: R$ %.2f", totalPorKm);
    printf("\ntotal por  dia: R$ %.2f", totalPorDia);

    if(temCupom == 1){
        printf("\nvocê teve desconto de R$ %.2f", valorDesconto);
    }

    if(totalPorDia < totalPorKm) {
        printf("\nsugerimos usar o plano por dia");
    }else {
        printf("\nsugerimos usar o plano por KM");
    }
    printf("\ntenha uma otima tarde.");

    printf("\nDesenvolvido por Eduardo Corrêa");
    return 0;

}