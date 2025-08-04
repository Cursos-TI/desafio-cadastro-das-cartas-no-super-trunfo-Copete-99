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
    
    printf ("Desafio Super Trunfo! \n ");
    
    printf ("Digite o estado 01:\\n");
    scanf ("%s",estado1);
    
    printf ("Digite o estado 02:\\n");
    scanf ("%s",estado2);
    
    printf ("Codigo 01:\\n");
    scanf ("%d", &codigo1);
    
    printf ("Codigo 02:\\n");
    scanf ("%d", &codigo2);
    
    printf ("Nome da cidade 01:\\n");
    scanf ("%s",cidade1);
    
    printf ("Nome da cidade 02:\\n");
    scanf ("%s",cidade2);
    
    printf ("População 01:\\n");
    scanf ("%d",&populacao1);

    printf ("População 02:\\n");
    scanf ("%d",&populacao2);

    printf ("Area 01:\n");
    scanf ("%f", &area1);
    
    printf ("Area 02:\n");
    scanf ("%f", &area2);
   
    printf ("PIB 01:\n");
    scanf ("%f", &PIB1);

    printf ("PIB 02:\n");
    scanf ("%f", &PIB2);
    
    printf ("Ponto turisticos 01:\\n");
    scanf ("%d", &pontoturistico1);

    printf ("Ponto turisticos 02:\\n");
    scanf ("%d", &pontoturistico2);

    printf("Dados da carta 01:");

    printf ("Estado 01: %s");
    printf ("Código 01: %d");
    printf ("Cidade 01: %s");
    printf ("População 01: %d");
    printf ("Area 01: %f");
    printf ("PIB 01: %f");
    printf ("Ponto turistico 01: %d");

    
    
    
    


    


    return 0;
}
