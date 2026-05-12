#include <stdio.h>

int main() {

    float notas[4];
    float media = 0;

    printf("Quais as suas notas?\n");

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media = media / 4;

    printf("\nMedia: %.2f\n", media);

    return 0;
}