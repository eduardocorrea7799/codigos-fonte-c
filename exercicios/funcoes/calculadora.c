#include <stdio.h>

void calculadora(char op, float n1, float n2) {
    if (op == '+')
        printf("Resultado: %.2f", n1 + n2);

    if (op == '-')
        printf("Resultado: %.2f", n1 - n2);

    if (op == '*')
        printf("Resultado: %.2f", n1 * n2);

    if (op == '/')
        printf("Resultado: %.2f", n1 / n2);
}

int main() {
    char op;
    float n1, n2;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    calculadora(op, n1, n2);

    return 0;
}