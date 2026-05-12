 #include <stdio.h>

 int main(){
    int dia = 0;

    printf("Qual dia da semana? (dom->0, sab->6)");
    scanf("%i", &dia);

    if(dia == 0) {
        printf("Domingo");
    }else if (dia == 1) {
        printf("segunda");
    }else if (dia == 2) {
        printf("terca");
    }else if (dia == 3) {
        printf("quarta");
    }else if (dia == 4) {
        printf("quinta");
    }else if (dia == 5) {
        printf("sexta");
    }else if (dia == 6) {
        printf("sabado");
    }else {
        printf("dia nao encontrado");
    }
    return 0;
}