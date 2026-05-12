#include <stdio.h>

int main() {

    float rodeio = 24.99;
    float refri = 7.99;
    float batataGrande = 14.99;
    float casquinha = 4.99;
    float cupom = 0.07;

    float total = rodeio + refri + batataGrande + casquinha;
    float desconto = (total * cupom);
    float totalPagar = total - desconto;

    printf("O total e R$ %.2f \n", total);
    printf("O desconto foi de R$ %.2f \n", desconto);
    printf("O total a ser pago e R$ %.2f", totalPagar);

    


    return 0;

}