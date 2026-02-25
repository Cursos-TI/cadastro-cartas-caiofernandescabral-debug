#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {

    // ================================
    // Cadastro das Cartas (Pré-definidas)
    // ================================

    struct Carta carta1 = {
        "SP",
        "C01",
        "Sao Paulo",
        12300000,
        1521.11,
        699000000000.0,
        50
    };

    struct Carta carta2 = {
        "RJ",
        "C02",
        "Rio de Janeiro",
        6000000,
        1182.30,
        300000000000.0,
        30
    };

    // ================================
    // Cálculo da Densidade Populacional
    // Fórmula: População / Área
    // ================================

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // ================================
    // Cálculo do PIB per capita
    // Fórmula: PIB / População
    // ================================

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ================================
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // Neste exemplo: POPULAÇÃO
    // ================================

    printf("========================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n");
    printf("========================================\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           carta1.nomeCidade, carta1.estado, carta1.populacao);

    printf("Carta 2 - %s (%s): %d\n\n",
           carta2.nomeCidade, carta2.estado, carta2.populacao);

    // ================================
    // Lógica de Comparação
    // Regra:
    // Para População -> Maior valor vence
    // ================================

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    }
    else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    // ================================
    // Exibição extra dos cálculos
    // (Mostrando que o programa realmente calculou)
    // ================================

    printf("\n----- Informacoes Calculadas -----\n");
    printf("Densidade Populacional:\n");
    printf("%s: %.2f hab/km2\n", carta1.nomeCidade, carta1.densidadePopulacional);
    printf("%s: %.2f hab/km2\n\n", carta2.nomeCidade, carta2.densidadePopulacional);

    printf("PIB per capita:\n");
    printf("%s: %.2f\n", carta1.nomeCidade, carta1.pibPerCapita);
    printf("%s: %.2f\n", carta2.nomeCidade, carta2.pibPerCapita);

    return 0;
}
