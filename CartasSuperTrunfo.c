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

    
    



    
    //recebendo dados
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




     

    
  
    

   

    
    
    
    


    

    return 0;
}
