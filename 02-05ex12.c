#include <stdio.h>
#include <string.h>

int main(void) {
    char municipio[100];
    int eleitores, votos;
    double percentual;

    // Entrada do nome do município
    printf("Digite o nome do município: ");
    fgets(municipio, sizeof(municipio), stdin);
    municipio[strcspn(municipio, "\n")] = '\0'; // Remove o caractere de nova linha

    // Entrada do número de eleitores aptos
    printf("Digite o número de eleitores aptos: ");
    scanf("%d", &eleitores);

    // Entrada do número de votos do candidato mais votado
    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", &votos);

    // Verifica se há segundo turno
    if (eleitores > 20000) {
        percentual = (double)votos / eleitores * 100;
        if (percentual <= 50.0) {
            printf("\nO município de %s terá segundo turno.\n", municipio);
        } else {
            printf("\nO município de %s não terá segundo turno.\n", municipio);
        }
    } else {
        printf("\nO município de %s não possui eleitores suficientes para segundo turno.\n", municipio);
    }

    return 0;
}