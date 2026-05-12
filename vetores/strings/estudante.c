#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char idade[30];
    char nome[30];
    char escola[30];
    char curso[30];
    char serie[30];
     
    printf("qual o seu nome?");
    scanf(" %[^\n]", nome);

    printf("onde voce estuda?");
    scanf(" %[^\n]", escola);

    printf("qual seu curso?");
    scanf(" %[^\n]", curso);

    printf("em qual serie voce esta?");
    scanf(" %[^\n]", serie);

    printf("qual sua idade?");
    scanf(" %[^\n]", idade);

return 0;
}