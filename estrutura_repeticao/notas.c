#include <stdio.h>
int main(){
printf("vamos calcular as notas dos alunos");

int qtdenotas=0;
double nota=0;
double totalNotas=0;
double mediaFinal=0;

printf("quantas notad deseja calcular");
scanf("%i", &qtdenotas);

for(int i=0; i< qtdenotas; i++){
    printf("qual a nota do aluno");
scanf("%lf", &nota);

totalNotas = totalNotas + nota;
}

mediaFinal = totalNotas / qtdenotas;

printf("a media fianl e %.2lf", mediaFinal);

if(mediaFinal >=6){
    printf("\n aprovado");
}else {
    printf("\n reprovado");
}

return 0;
}