#include <stdio.h>


int main() {
    char cidade1[20];
    char cidade2[20];
    float PIB1;
    float PIB2;
    int populacao1;
    int populacao2;
    int pontoturistico1;
    int pontoturistico2;
    float area1;
    float area2;
    char estado1[10];
    char estado2[10];
    int codigo1;
    int codigo2;
    
    printf ("Desafio Super Trunfo!\n ");
    
    printf ("Digite o estado 01:\n");
    scanf ("%s",estado1);
    
    printf ("Digite o estado 02:\n");
    scanf ("%s",estado2);
    
    printf ("Codigo 01:\n");
    scanf ("%d", &codigo1);
    
    printf ("Codigo 02:\n");
    scanf ("%d", &codigo2);
    
    printf ("Nome da cidade 01:\n");
    scanf ("%s",cidade1);
    
    printf ("Nome da cidade 02:\n");
    scanf ("%s",cidade2);
    
    printf ("População 01:\n");
    scanf ("%d",&populacao1);

    printf ("População 02:\n");
    scanf ("%d",&populacao2);

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

    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 01: %s \n", estado1);
    printf ("Código 01: %d \n", codigo1);
    printf ("Cidade 01: %s\n", cidade1);
    printf ("População 01: %d \n", populacao1);
    printf ("Area 01: %f \n", area1);
    printf ("PIB 01: %f \n", PIB1);
    printf ("Ponto turistico 01: %d \n", pontoturistico1);

    printf("\n --- Dados da carta: ---\n");
    
    printf ("Estado 01: %s \n", estado2);
    printf ("Código 01: %d \n", codigo2);
    printf ("Cidade 01: %s\n", cidade2);
    printf ("População 01: %d \n", populacao2);
    printf ("Area 01: %f \n", area2);
    printf ("PIB 01: %f \n", PIB2);
    printf ("Ponto turistico 01: %d \n", pontoturistico2);

    
    
    
    


    


    return 0;
}
