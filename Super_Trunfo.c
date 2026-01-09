// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Desafio foi concluido no Vision 
#include <stdio.h>
int main(){
    char estado;
    char codigodacarta[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
  
    printf("O nome do estado é: \n");
    scanf(" %c", &estado);
    
    
    printf("o codigo da carta é:\n");
    scanf("%s", codigodacarta);
     
 
    printf("O nome da cidade é: \n");
    scanf("%s", cidade);
    
    
    printf("O numero de habitantes é: \n");
    scanf("%d", &populacao);
    
 
    printf("A área da cidade é: \n");
    scanf("%f", &area);
    

    printf("O pib é: \n");
    scanf("%f", &pib);
    
    printf("A quantidade de pontos turisticos é: \n");
    scanf("%d", &pontosturisticos);
    
    
    char estado2;
    char codigodacarta2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
 
    printf("O nome do estado2 é: \n");
    scanf(" %c", &estado2);
    

    printf("o codigo da carta2 é:\n");
    scanf("%s", codigodacarta2);
   
    
    printf("O nome da cidade2 é: \n");
    scanf("%s", cidade2);
    
 
    printf("O numero de habitantes2 é: \n");
    scanf("%d", &populacao2);
   
    printf("A área da cidade2 é: \n");
    scanf("%f", &area2);
    
    
    printf("O pib2 é: \n");
    scanf("%f", &pib2);
    

    printf("A quantidade de pontos turisticos2 é: \n");
    scanf("%d", &pontosturisticos2);
    

    printf("O estado é: %c\n", estado);
    printf("O codigo da carta é: %s\n", codigodacarta);
    printf("A cidade é: %s\n", cidade);
    printf("A quantidade de habitantes é: %d\n", populacao);
    printf("A aréa da cidade é: %f\n", area);
    printf("O pib da cidade é: %f\n", pib);
    printf("A quantidade de pontos turisticos é: %d\n", pontosturisticos);

    printf("O estado2 é: %c\n", estado2);
    printf("O codigo da carta2 é: %s\n", codigodacarta2);
    printf("A cidade2 é: %s\n", cidade2);
    printf("A quantidade de habitantes2 é: %d\n", populacao2);
    printf("A aréa da cidade2 é: %f\n", area2);
    printf("O pib2 é: %f\n", pib2);
    printf("A quantidade de pontos turisticos2 é: %d\n", pontosturisticos2);

    
    return 0;
      
} 
