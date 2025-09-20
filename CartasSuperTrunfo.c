#include <stdio.h>

int main() {
    char cidade1[20], cidade2[20];
    char estado1[10], estado2[10];
    unsigned long int populacao1, populacao2;
    float area1, area2, PIB1, PIB2;
    int pontos1, pontos2;
    float densidade1, densidade2, percapita1, percapita2;
    float superpoder1, superpoder2;

    printf("Desafio Super Trunfo!\n");

    // --- Carta 1 ---
    printf("Digite o estado 01: ");
    scanf("%s", estado1);
    printf("Digite a cidade 01: ");
    scanf("%s", cidade1);
    printf("Populacao 01: ");
    scanf("%lu", &populacao1);
    printf("Area 01: ");
    scanf("%f", &area1);
    printf("PIB 01 (em bilhoes): ");
    scanf("%f", &PIB1);
    printf("Pontos turisticos 01: ");
    scanf("%d", &pontos1);

    // --- Carta 2 ---
    printf("\nDigite o estado 02: ");
    scanf("%s", estado2);
    printf("Digite a cidade 02: ");
    scanf("%s", cidade2);
    printf("Populacao 02: ");
    scanf("%lu", &populacao2);
    printf("Area 02: ");
    scanf("%f", &area2);
    printf("PIB 02 (em bilhoes): ");
    scanf("%f", &PIB2);
    printf("Pontos turisticos 02: ");
    scanf("%d", &pontos2);

    // --- Calculos ---
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    percapita1 = (PIB1 * 1e9f) / populacao1;
    percapita2 = (PIB2 * 1e9f) / populacao2;

    superpoder1 = populacao1 + area1 + PIB1 + pontos1 + percapita1;
    superpoder2 = populacao2 + area2 + PIB2 + pontos2 + percapita2;

    // --- Resultados ---
    printf("\n--- RESULTADOS ---\n");
    printf("%s/%s: Superpoder = %.2f\n", cidade1, estado1, superpoder1);
    printf("%s/%s: Superpoder = %.2f\n", cidade2, estado2, superpoder2);

    if (superpoder1 > superpoder2) {
        printf(">> Vencedor: %s (%s)\n", cidade1, estado1);
    } else if (superpoder2 > superpoder1) {
        printf(">> Vencedor: %s (%s)\n", cidade2, estado2);
    } else {
        printf(">> Empate!\n");
    }

    return 0;
}

