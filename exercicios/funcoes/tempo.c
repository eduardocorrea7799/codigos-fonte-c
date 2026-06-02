#include <stdio.h>
#include <locale.h>

void calcularhorasmes(int horas){

    printf("Total de horas em um semestre é: %d", horas * 5);
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int horasmes = 0;

    printf("quantas horas por mes tem seu curso?");
    scanf("%d", &horasmes);

    calcularhorasmes(horasmes);
   

    return 0;

}