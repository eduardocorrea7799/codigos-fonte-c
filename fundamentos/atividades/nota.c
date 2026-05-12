#include <stdio.h>

int main() {
    
int atv1 = 0;
int atv2 = 0;

printf("qual a nota da atividade 1?");
scanf("%i" , &atv1);

printf("qual a nota da atividade 2?");
scanf("%i" , &atv2);

int total_atvs = atv1 + atv2;

printf("a soma das atividades e %i" , total_atvs);

    return 0;
}