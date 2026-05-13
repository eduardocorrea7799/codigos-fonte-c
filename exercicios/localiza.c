#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("ola seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("obrigado por escolher nossa loja, %s", nome);

    printf("\n quantos KMs vc vai rodar com o carro?");
    scanf("%i", &km);

    printf("para mostrar um relatorio detalahdo diga quanstos dias vai precisar do carro");
    scanf("%i", &dias);

    totalPorKm = km * VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    printf("%s, segue um relatorio detalhado", nome);
    printf("\ntotal por KM: R$ %.2f", totalPorKm);
    printf("\ntotal por  dia: R$ %.2f", totalPorDia);

    if(totalPorDia < totalPorKm) {
        printf("\nsugerimos usar o plano por dia");
    }else {
        printf("\nsugerimos usar o plano por KM");
    }
    printf("\ntenha uma otima tarde.");
    return 0;

}