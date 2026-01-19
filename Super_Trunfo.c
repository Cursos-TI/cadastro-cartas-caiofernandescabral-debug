#include <stdio.h>
int main(){
    char estado;
    char codigodacarta[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float Densidade;
    float pibperCapita;
    float superpoder1; 
    
    printf("***SUPER TRUNFO: AVENTUREIRO***\n");
    printf("CARTA 1\n");

    printf("O nome do estado é: \n");
    scanf(" %c", &estado);
    
    
    printf("o codigo da carta é:\n");
    scanf("%s", codigodacarta);
     
 
    printf("O nome da cidade é: \n");
    scanf("%s", cidade);
    
    
    printf("O numero de habitantes é: \n");
    scanf("%lu", &populacao);
    
 
    printf("A área da cidade é: \n");
    scanf("%f", &area);
    

    printf("O pib é: \n");
    scanf("%f", &pib);
    
    printf("A quantidade de pontos turisticos é: \n");
    scanf("%d", &pontosturisticos);

    Densidade = populacao/area;
    pibperCapita = pib/populacao;
    
    superpoder1 = (float)populacao + area + pib + pontosturisticos 
                  + pibperCapita + (1.0f / Densidade);

   
    printf("CARTA 2\n");

    char estado2;
    char codigodacarta2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibperCapita2;
    float superPoder2;
    
 
    printf("O nome do estado2 é: \n");
    scanf(" %c", &estado2);
    

    printf("o codigo da carta2 é:\n");
    scanf("%s", codigodacarta2);
   
    
    printf("O nome da cidade2 é: \n");
    scanf("%s", cidade2);
    
 
    printf("O numero de habitantes2 é: \n");
    scanf("%lu", &populacao2);
   
    printf("A área da cidade2 é: \n");
    scanf("%f", &area2);
    
    
    printf("O pib2 é: \n");
    scanf("%f", &pib2);
    

    printf("A quantidade de pontos turisticos2 é: \n");
    scanf("%d", &pontosturisticos2);
    
    densidade2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

     superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 
                  + pibperCapita2 + (1.0f / densidade2);

    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %s\n", codigodacarta);
    printf("A cidade é: %s\n", cidade);
    printf("A quantidade de habitantes é: %lu\n", populacao);
    printf("A aréa da cidade é: %f\n", area);
    printf("O pib da cidade é: %f\n", pib);
    printf("A quantidade de pontos turisticos é: %d\n", pontosturisticos);
    printf("A densidade populacional é: %.2f hab/km²\n", Densidade);
    printf("A PIB per Capita é: %.2f reais \n", pibperCapita);
    printf("Super poder: %.2f\n", superpoder1);
 
    printf("O estado2 é: %c\n", estado2);
    printf("O codigo da carta2 é: %s\n", codigodacarta2);
    printf("A cidade2 é: %s\n", cidade2);
    printf("A quantidade de habitantes2 é: %lu\n", populacao2);
    printf("A aréa da cidade2 é: %f por km² \n", area2);
    printf("O pib2 é: %f\n", pib2);
    printf("A quantidade de pontos turisticos2 é: %d\n", pontosturisticos2);
    printf("A densidade populacional2 é: %.2f hab/km²\n", densidade2);
    printf("A PIB per Capita2 é: %.2f reais \n", pibperCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", Densidade < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibperCapita > pibperCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superPoder2);


    
    return 0;
      
} 
