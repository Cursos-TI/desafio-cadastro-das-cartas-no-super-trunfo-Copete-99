#include <stdio.h>


int main() {
    char cidade1[20], cidade2[20];
    float PIB1, PIB2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    unsigned long int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2;
    char estado1[10], estado2[10]; 
    char codigo1 [4], codigo2 [4];
    float superpoder1, superpoder2;
    int resultadoA, resultadoB;
    float ataque1, ataque2;


    

    
    



    
    //recebendo dados das cartas
    printf ("Desafio Super Trunfo!\n ");
    
    printf ("Digite o estado 01:\n");
    scanf ("%s",estado1);
    
    printf ("Digite o estado 02:\n");
    scanf ("%s",estado2);
    
    printf ("Codigo 01:\n");
    scanf ("%s", codigo1);
    
    printf ("Codigo 02:\n");
    scanf ("%s", codigo2);
    
    printf ("Nome da cidade 01:\n");
    scanf ("%s",cidade1);
    
    printf ("Nome da cidade 02:\n");
    scanf ("%s",cidade2);
    
    printf ("População 01:\n");
    scanf ("%lu",&populacao1);

    printf ("População 02:\n");
    scanf ("%lu",&populacao2);

    printf ("Area 01:\n");
    scanf ("%f", &area1);
    
    printf ("Area 02:\n");
    scanf ("%f", &area2);
   
    printf ("PIB 01:\n");
    scanf ("%f", &PIB1);

    printf ("PIB 02:\n");
    scanf ("%f", &PIB2);
    
    printf ("Ponto turisticos 01:\n");
    scanf ("%d", &pontoturistico1);

    printf ("Ponto turisticos 02:\n");
    scanf ("%d", &pontoturistico2);
    
    //calculos
    densidade1 = (float) populacao1 / area1;
    densidade2 =  (float) populacao2 / area2;
    percapita1 = (PIB1 * 1e9f)/ (float) populacao1;
    percapita2 = (PIB2 * 1e9f) / (float) populacao2;

    // fazendo a soma para mostrar poder da carta
    superpoder1 = populacao1 + area1 + PIB1 + pontoturistico1 + densidade1 + percapita1;
    superpoder2 = populacao2 + area2 + PIB2 + pontoturistico2 + densidade2 + percapita2;


    
    //dados das cartas
    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 01: %s \n", estado1);
    printf ("Código 01: %s \n", codigo1);
    printf ("Cidade 01: %s\n", cidade1);
    printf ("População 01: %lu \n", populacao1);
    printf ("Area 01: %.2f km²\n", area1);
    printf ("PIB 01: %.2f bilhoes\n", PIB1);
    printf ("Ponto turistico 01: %d \n", pontoturistico1);
    printf("Densidade populaciona é: %.2f hab/km \n ", densidade1 );
    printf ("PIB percapita é: %.2f reais\n", percapita1);
  

    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 02: %s \n", estado2);
    printf ("Código 02: %s \n", codigo2);
    printf ("Cidade 02: %s\n", cidade2);
    printf ("População 02: %lu \n", populacao2);
    printf ("Area 02: %.2f km²\n", area2);
    printf ("PIB 02: %.2f bilhoes\n", PIB2);
    printf ("Ponto turistico 02: %d \n", pontoturistico2);
    printf("Densidade populaciona é: %.2f hab/km \n ", densidade2 );
    printf ("PIB percapita é: %.2f reais\n", percapita2);

   
 
       printf("******\n Super poder \n*******");
 
    // resultado super poder
    printf("Superpoder Carta 1: %d\n", superpoder1);
    printf("Superpoder Carta 2: %d\n", superpoder2);

  
  
    //comparações
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Area: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (PIB1 > PIB2) ? 1 : 2,
           (PIB1 > PIB2) ? 1 : 0);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontoturistico1 > pontoturistico2) ? 1 : 2,
           (pontoturistico1 > pontoturistico2) ? 1 : 0);

    // Densidade: menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           (densidade1 < densidade2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (percapita1 > percapita2) ? 1 : 2,
           (percapita1 > percapita2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (superpoder1 > superpoder2) ? 1 : 2,
           (superpoder1 > superpoder2) ? 1 : 0);
    
        printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

      // --- Switch para selecionar atributo ---
    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", pais1, pib1);
            printf("%s: %.2f bilhoes\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Numero de pontos turisticos\n");
            printf("%s: %d\n", pais1, pontos_turisticos1);
            printf("%s: %d\n", pais2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (quanto MENOR, melhor)
            printf("Atributo: Densidade demografica\n");
            printf("%s: %.4f hab/km²\n", pais1, densidade1);
            printf("%s: %.4f hab/km²\n", pais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha entre 1 e 5.\n");
            break;
    }

        // Menu do segundo atributo (dinâmico)
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    if(opcao1 != 1) printf("1 - Populacao\n");
    if(opcao1 != 2) printf("2 - Area\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Densidade Demografica\n");
    scanf("%d", &opcao2);

    // Primeiro atributo
    switch(opcao1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;
        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Segundo atributo
    switch(opcao2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;
        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos resultados
    printf("\n--- RESULTADO ---\n");
    printf("%s: %d e %d -> Soma = %d\n", pais1, valor1_carta1, valor2_carta1, soma1);
    printf("%s: %d e %d -> Soma = %d\n", pais2, valor1_carta2, valor2_carta2, soma2);

    if(soma1 > soma2) {
        printf("Vencedor: %s\n", pais1);
    } else if(soma2 > soma1) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Empate!\n");
    }


   






     

    
  
    

   

    
    
    
    


    

    return 0;
}
