#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema: Comparação de Cartas com base em um único atributo

int main() {
    // Declaração das variáveis da carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;

    // ============================
    // CADASTRO DAS CARTAS
    // ============================
    printf("Cadastro da carta 1:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a população: ");
    scanf("%lu", &populacao1);

    printf("Informe a área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapta1 = pib1 / (float) populacao1;

    printf("\nCadastro da carta 2:\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a população: ");
    scanf("%lu", &populacao2);

    printf("Informe a área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapta2 = pib2 / (float) populacao2;

    // ============================
    // EXIBIÇÃO DAS CARTAS
    // ============================
    printf("\n========== CARTAS CADASTRADAS ==========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f bilhões\n", pibPerCapta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f bilhões\n", pibPerCapta2);

    // ============================
    // COMPARAÇÃO DE UM ATRIBUTO
    // ============================

    // 🔹 Escolha o atributo para comparação:
    // "populacao", "area", "pib", "densidade", ou "pibPerCapta"
    // Altere o atributo desejado diretamente no código abaixo:
    int atributoEscolhido = 1; // 1 = População | 2 = Área | 3 = PIB | 4 = Densidade Populacional | 5 = PIB per Capita

    printf("\n========== COMPARAÇÃO DE CARTAS ==========\n");

    if (atributoEscolhido == 1) {
        printf("Comparação de cartas (Atributo: População)\n\n");
        printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 2) {
        printf("Comparação de cartas (Atributo: Área)\n\n");
        printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);

        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 3) {
        printf("Comparação de cartas (Atributo: PIB)\n\n");
        printf("Carta 1 - %s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões\n", nomeCidade2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 4) {
        printf("Comparação de cartas (Atributo: Densidade Populacional)\n\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional2)
            printf("Resultado: Carta 1 (%s) venceu! (menor densidade é melhor)\n", nomeCidade1);
        else if (densidadePopulacional2 < densidadePopulacional1)
            printf("Resultado: Carta 2 (%s) venceu! (menor densidade é melhor)\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (atributoEscolhido == 5) {
        printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");
        printf("Carta 1 - %s: %.6f bilhões\n", nomeCidade1, pibPerCapta1);
        printf("Carta 2 - %s: %.6f bilhões\n", nomeCidade2, pibPerCapta2);

        if (pibPerCapta1 > pibPerCapta2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        else if (pibPerCapta2 > pibPerCapta1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("Resultado: Empate!\n");
    }

    else {
        printf("Atributo inválido!\n");
    }

    return 0;
}
