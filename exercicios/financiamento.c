#include <stdio.h>
#include <locale.h>

int main()
{
    int escolhaFinanciamento = 0;
    int escolhaVeiculo = 0;
    int caminhao = 0;
    int carro = 0;
    int moto = 0;
   
    char veiculos[3][36] = {"caminhao", "carro", "moto"};
    char imoveis[2][20] = {"casas", "apartamento"};

    int escolhaImovel = 0;
    int casas = 0;
    int apartamento = 0;
    char nome[30];
    const float jurosVeiculos = 0.015;
    const float jurosImoveis = 0.005;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("qual o seu nome?");
    scanf("%s", nome);

    printf("%s,o que dejesa financiar,veiculo ou imovel? 1-> veiculo, 0-> imovel", nome);
    scanf("%i", &escolhaFinanciamento);

    if (escolhaFinanciamento == 1)
    {
     printf("opcoes de veiculo para financiar");
        for (int i = 0; i < 3; i++)
        {
            printf("\n %i"), i, veiculos[i];
            printf("\n  %s,qual dos veiculos dejesa financiar? 10 -> caminhao, 20 -> carro, 30 -> moto",nome);
            scanf("%i", &escolhaVeiculo);
            
          if(escolhaVeiculo == 10){
                printf("otima escolha de caminhao");
            }
          if(escolhaVeiculo == 20){
                printf("otima escolha de carro");
            }
            if(escolhaVeiculo == 30){
                printf("otima escolha de moto");
            }
        }
    }
    else
    {
        (escolhaFinanciamento == 0);
        printf("opcoes de imovel para financiar");
        for (int i = 0; i < 2; i++)
        {
            printf("\n %i"), i, imoveis[i];
           printf("\n %s,qual dos veiculos dejesa financiar? 10 -> casa, 20 -> apartamento",nome);
            scanf("%i", &escolhaImovel);

        
        }
    }


    return 0;
}