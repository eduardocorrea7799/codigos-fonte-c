#include <stdio.h>

void mostrarPares(int inferior, int superior) {
    for (int i = inferior; i <= superior; i++)
        if (i % 2 == 0)
            printf("%i ", i);
}

int main() {
    int inferior, superior;

    printf("Digite o limite inferior: ");
    scanf("%i", &inferior);

    printf("Digite o limite superior: ");
    scanf("%i", &superior);

    mostrarPares(inferior, superior);

    return 0;
}