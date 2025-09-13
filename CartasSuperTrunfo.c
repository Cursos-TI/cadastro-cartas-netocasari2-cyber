#include <stdio.h>

struct Cidade {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Cidade carta;

    // Entrada de dados
    printf("Digite o codigo da carta (Ex: A01): ");
    scanf("%s", carta.codigo);

    printf("Digite a populacao: ");
    scanf("%d", &carta.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta.pontosTuristicos);

    // Saída de dados
    printf("\n--- Carta Cadastrada ---\n");
    printf("Codigo: %s\n", carta.codigo);
    printf("Populacao: %d habitantes\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhoes\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);

    return 0;
}
