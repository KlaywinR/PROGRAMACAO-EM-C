
#include <stdio.h>
#include <math.h> 

int main(void) {
    float a, b, c;
    double x1, x2; // Declaração das raízes
    double delta;

    // Entrada de dados
    printf("\n\n\nDigite o valor de A: \n\n\n");
    scanf("%f", &a);

    printf("\n\n\nDigite o valor de B: \n\n\n");
    scanf("%f", &b);

    printf("\n\n\nDigite o valor de C: \n\n\n");
    scanf("%f", &c);

    // Verifica se é uma equação de segundo grau
    if (a == 0) {
        printf("\n\nNAO É EQUACAO DE SEGUNDO GRAU\n\n");
        return 1;
    }

    // Calcula o delta
    delta = pow(b, 2) - 4 * a * c;

    // Verifica as condições de delta
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\n\nAs raízes da equação são:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("\n\nA equação possui uma raiz única:\n");
        printf("x1 = %.2lf\n", x1);
    } else {
        printf("\n\nA equação não possui raízes reais.\n");
    }

    return 0;
}