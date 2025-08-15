#include <stdio.h>


int main() {
    char cidade1[20];
    char cidade2[20];
    float PIB1, PIB2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    unsigned long int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2;
    char estado1[10];
    char estado2[10];
    char codigo1 [4];
    char codigo2 [4];
    
    
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
    
    densidade1 = (float) populacao1 / area1;
    densidade2 =  (float) populacao2 / area2;
    percapita1 = PIB1 / (float) populacao1;
    percapita2 = PIB2  / (float) populacao2;

    superpoder1 = populacao1
                + area1
                + PIB1
                + pontoturistico1
                + percapita1
                + (1.f/densidade1);
                
    superpoder2 = populacao2
                + area2
                + PIB2
                + pontoturistico2
                + percapita2
                + (1.f/densidade2);



        
    

    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 01: %s \n", estado1);
    printf ("Código 01: %s \n", codigo1);
    printf ("Cidade 01: %s\n", cidade1);
    printf ("População 01: %lu \n", populacao1);
    printf ("Area 01: %2.f km²\n", area1);
    printf ("PIB 01: %2.f bilhoes\n", PIB1);
    printf ("Ponto turistico 01: %d \n", pontoturistico1);
    printf("Densidade populaciona é: %2.f hab/km \n ", densidade1 );
    printf ("PIB percapita é: %2.f reais\n", percapita1);
  

    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 02: %s \n", estado2);
    printf ("Código 02: %s \n", codigo2);
    printf ("Cidade 02: %s\n", cidade2);
    printf ("População 02: %lu \n", populacao2);
    printf ("Area 02: %2.f km²\n", area2);
    printf ("PIB 02: %2.f bilhoes\n", PIB2);
    printf ("Ponto turistico 02: %d \n", pontoturistico2);
    printf("Densidade populaciona é: %2.f hab/km \n ", densidade2 );
    printf ("PIB percapita é: %2.f reais\n", percapita2);
  
    printf("Cidade 1: %s | Super Poder: %.2f\n", cidade1, superpoder1);
    printf("Cidade 2: %s | Super Poder: %.2f\n", cidade2, superpoder2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %lu venceu (%lu)\n", compararMaior(carta1.populacao, carta2.populacao) ? 1 : 2,
           compararMaior(carta1.populacao, carta2.populacao));
    printf("Area: Carta %d venceu (%d)\n", compararMaior(carta1.area, carta2.area) ? 1 : 2,
           compararMaior(carta1.area, carta2.area));
    printf("PIB: Carta %d venceu (%d)\n", compararMaior(carta1.PIB, carta2.PIB) ? 1 : 2,
           compararMaior(carta1.PIB, carta2.PIB));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", compararMaior(carta1.pontosTuristicos, carta2.pontosTuristicos) ? 1 : 2,
           compararMaior(carta1.pontosTuristicos, carta2.pontosTuristicos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compararMenor(carta1.densidadePopulacional, carta2.densidadePopulacional) ? 1 : 2,
           compararMenor(carta1.densidadePopulacional, carta2.densidadePopulacional));
    printf("PIB per Capita: Carta %d venceu (%d)\n", compararMaior(carta1.PIBperCapita, carta2.PIBperCapita) ? 1 : 2,
           compararMaior(carta1.PIBperCapita, carta2.PIBperCapita));
    printf("Super Poder: Carta %d venceu (%d)\n", compararMaior(carta1.superPoder, carta2.superPoder) ? 1 : 2,
           compararMaior(carta1.superPoder, carta2.superPoder));

    
    
    
    


    

    return 0;
}
