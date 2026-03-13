#include <stdio.h>

int main() {
    // --- VARIÁVEIS ---
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2, opcao; 
    float area1, area2, pib1, pib2; 
    float densidadePopulacional1, densidadePopulacional2; 
    float pibpercapita1, pibpercapita2, superPoder1, superPoder2;

    // --- 1. CADASTRO DA CARTA 1 ---
    printf("-- Cadastro da Carta 1 -- \n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código Da Carta: "); scanf("%s", codigo1);
    printf("Nome Da Cidade: "); scanf("%s", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Número De Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // --- 2. CADASTRO DA CARTA 2 ---
    printf("\n-- Cadastro da Carta 2 --\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código Da Carta: "); scanf("%s", codigo2);
    printf("Nome Da Cidade: "); scanf("%s", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Número De Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // --- 3. CÁLCULOS ---
    densidadePopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + (1.0 / densidadePopulacional1);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + (1.0 / densidadePopulacional2);

    // --- 4. EXIBIÇÃO DETALHADA ---
    printf("\n================ CARTA 1 ================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %f reais\n", pibpercapita1);
    printf("Super Poder: %f\n", superPoder1);

    printf("\n================ CARTA 2 ================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %f reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superPoder2);

    // --- 5. MENU DA COMPARAÇÃO --- Nível Aventureiro - Tema 3
    printf("\n-----------------------------------------\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n6. Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu vs %s: %lu\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %f vs %s: %f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %f vs %s: %f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d vs %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade (Menor vence!)\n");
            printf("%s: %f vs %s: %f\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) printf("Vencedor: %s\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        case 6:
            printf("Atributo: Super Poder\n");
            printf("%s: %f vs %s: %f\n", nomeCidade1, superPoder1, nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2) printf("Vencedor: %s\n", nomeCidade1);
            else if (superPoder2 > superPoder1) printf("Vencedor: %s\n", nomeCidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção Inválida!\n");
    }

    return 0;
}