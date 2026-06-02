#include <stdio.h>

void mostrarTabuada(int numero, int inferior, int superior) {
    for (int i = inferior; i <= superior; i++) {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }
}

int main() {
    int numero, inferior, superior;

    printf("Digite o numero da tabuada: ");
    scanf("%i", &numero);

    printf("Digite o limite inferior: ");
    scanf("%i", &inferior);

    printf("Digite o limite superior: ");
    scanf("%i", &superior);

    mostrarTabuada(numero, inferior, superior);

    return 0;
}_