#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
 char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1; 
  int pontosTuristicos1;
  float area1; 
  float pib1; 
  float densidadePopulacional1; 
  float pibpercapita1; 
  float superPoder1;

  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2; 
  int pontosTuristicos2;
  float area2; 
  float pib2; 
  float densidadePopulacional2; 
  float pibpercapita2; 
  float superPoder2;
    
 // Cadastro das Cartas:
// Implemente a lógica para solicitar ao usuário que insira os dados das cidades
// utilizando a função scanf para capturar as entradas.
// utilize o código do primeiro desafio
  printf("-- Cadastro da Carta 1 -- \n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código Da Carta (ex: A01):");
  scanf("%s", codigo1);
  printf("Nome Da Cidade: ");
  scanf("%s", nomeCidade1);
  printf("População: ");
  scanf("%lu", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f",&pib1);
  printf("Número De Pontos Turísticos:");
  scanf("%d", &pontosTuristicos1);

// O sistema calcula automaticamente os novos atributos baseados nos dados adicionados
// Usei (float) para garantir que a divisão entre inteiros não perca as casas decimais
  densidadePopulacional1 = (float) populacao1 / area1;
  pibpercapita1 = (pib1 * 1000000000.0) / (float) populacao1;



  printf("\n-- Cadastro da Carta 2 --\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Código Da Carta (ex: A01):");
  scanf("%s", codigo2);
  printf("Nome Da Cidade: ");
  scanf("%s", nomeCidade2);
  printf("População: ");
  scanf("%lu", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número De Pontos Turísticos:");
  scanf("%d", &pontosTuristicos2);

  // O sistema calcula automaticamente os novos atributos baseados nos dados inseridos
  // Usei (float) para garantir que a divisão entre inteiros não perca as casas decimais
  densidadePopulacional2 = (float) populacao2 / area2;
  pibpercapita2 = (pib2 * 1000000000.0) / (float) populacao2;

     //CÁLCULO DO SUPER PODER
    // Soma de todos os atributos. A densidade entra invertida (1/valor)
  superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1.0 / densidadePopulacional1);
  superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1.0 / densidadePopulacional2);

  // Área para exibição dos dados da cidade
  printf("\n ----- CARTA 1 -----\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1); 
  printf("Pib Per Capita: %.2f reais\n", pibpercapita1); 


  printf("\n ----- CARTA 2 -----\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2); 
  printf("Pib Per Capita: %.2f reais\n", pibpercapita2); 


  // --- BLOCO DE COMPARAÇÃO ---

printf("\n--- RESULTADO DA COMPARAÇÃO --- \n");
// O resultado será 1 se a Carta 1 vencer e 0 se a Carta 2 vencer
printf("População: %d\n", populacao1 > populacao2);
printf("Área: %d\n", area1 > area2);
printf("PIB: %d\n", pib1 > pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2); // Na Densidade, ganha quem tem o MENOR valor!
printf("PIB Per Capita: %d\n", pibpercapita1 > pibpercapita2);
printf("Super Poder: %d\n", superPoder1 > superPoder2);


    // --- LÓGICA DE COMPARAÇÃO (Nível Novato - Tema 3) ---
// O atributo escolhido para comparação foi: População

printf("\nComparação de Cartas (Atributo: População): \n");
printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);

if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) Venceu!\n", nomeCidade1);
} else {
    printf("Resultado: Carta 2 (%s) Venceu!\n", nomeCidade2);
}

    return 0;
}
