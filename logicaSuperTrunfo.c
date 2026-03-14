#include <stdio.h>

int main() {
    // --- VARIÁVEIS ATUALIZADAS (Países) ---
    char pais1, pais2; // Mudou de estado para pais
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; 
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2; 
    float densidadePopulacional1, densidadePopulacional2; 
    float pibpercapita1, pibpercapita2, superPoder1, superPoder2;
    int opcao1, opcao2;
    float valor1_Atrib1, valor1_Atrib2, soma1; 
    float valor2_Atrib1, valor2_Atrib2, soma2;

    // --- 1. CADASTRO DA CARTA 1 ---
    printf("-- Cadastro da Carta 1 -- \n");
    printf("País: "); scanf(" %c", &pais1); // Texto alterado
    printf("Código Da Carta: "); scanf("%s", codigo1);
    printf("Nome Da Cidade: "); scanf("%s", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Número De Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // --- 2. CADASTRO DA CARTA 2 ---
    printf("\n-- Cadastro da Carta 2 --\n");
    printf("País: "); scanf(" %c", &pais2); // Texto alterado
    printf("Código Da Carta: "); scanf("%s", codigo2);
    printf("Nome Da Cidade: "); scanf("%s", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Número De Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // --- 3. CÁLCULOS (Permanecem iguais) ---
    densidadePopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000.0) / (float) populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibpercapita1 + (1.0 / densidadePopulacional1);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000.0) / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibpercapita2 + (1.0 / densidadePopulacional2);

    // --- 4. EXIBIÇÃO DETALHADA ---
    printf("\n================ CARTA 1 ================\n");
    printf("País: %c\n", pais1); // Texto alterado
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
    printf("País: %c\n", pais2); // Texto alterado
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %f reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superPoder2);

    // --- 5. MENU DA COMPARAÇÃO --- Nível Mestre
    printf("\n--- Escolha DOIS atributos para somar e duelar ---\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n6. Super Poder\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nERRO: Você escolheu o mesmo atributo duas vezes! Reinicie o programa.\n");
        return 0;        
    }

    switch (opcao1) {
        case 1: valor1_Atrib1 = (float)populacao1; valor2_Atrib1 = (float)populacao2; break;
        case 2: valor1_Atrib1 = area1; valor2_Atrib1 = area2; break;
        case 3: valor1_Atrib1 = pib1; valor2_Atrib1 = pib2; break;
        case 4: valor1_Atrib1 = (float)pontosTuristicos1; valor2_Atrib1 = (float)pontosTuristicos2; break;
        case 5: valor1_Atrib1 = densidadePopulacional1; valor2_Atrib1 = densidadePopulacional2; break;
        case 6: valor1_Atrib1 = superPoder1; valor2_Atrib1 = superPoder2; break;
    }

    switch (opcao2) {
        case 1: valor1_Atrib2 = (float)populacao1; valor2_Atrib2 = (float)populacao2; break;
        case 2: valor1_Atrib2 = area1; valor2_Atrib2 = area2; break;
        case 3: valor1_Atrib2 = pib1; valor2_Atrib2 = pib2; break;
        case 4: valor1_Atrib2 = (float)pontosTuristicos1; valor2_Atrib2 = (float)pontosTuristicos2; break;
        case 5: valor1_Atrib2 = densidadePopulacional1; valor2_Atrib2 = densidadePopulacional2; break;
        case 6: valor1_Atrib2 = superPoder1; valor2_Atrib2 = superPoder2; break;
    }

    soma1 = valor1_Atrib1 + valor1_Atrib2;
    soma2 = valor2_Atrib1 + valor2_Atrib2;

    printf("\n--- Resultado Final (Soma dos Atributos) ---\n");
    printf("%s (Soma: %f) vs %s (Soma: %f)\n", nomeCidade1, soma1, nomeCidade2, soma2);

    (soma1 > soma2) ? printf("Vencedor: %s\n", nomeCidade1) : 
    (soma2 > soma1) ? printf("Vencedor: %s\n", nomeCidade2) : 
    printf("Resultado: Empate!\n");

    return 0;
}