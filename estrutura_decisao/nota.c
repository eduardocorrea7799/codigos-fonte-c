#include <stdio.h>

float main() {

    float nota = 0;
    printf("Qual sua nota?");
    scanf("%f", &nota);

 if (nota<=6.9){
        printf("voce esta aprovado");
 }else {
    printf("voce esta reprovado");
}
return 0;
}