#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Joao Paulo de Souza

int main() {
    printf("Desafio Super Trunfo - Calculo Dencidade Populacional e PIB per capita\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

//Declaração de variáveis da carta1
    int populacao1, pontos1;
    float area1, pib1, densidade1, percapita1;
    char estado1[5], codigocarta1[5], cidade1[25];

//Declaração de variáveis da carta2
    int populacao2, pontos2;
    float area2, pib2, densidade2, percapita2;
    char estado2[5], codigocarta2[5], cidade2[25];

//As variaveis estão direnciadas pelo numeral do fim, 1 para carta e 2 para carta 2



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
//Inicio da coleta de dados da carta 1

    printf("Inicie os dados da carta 1. \n");
    printf("Digite a letra referente ao estado da carta 1. \n");
    scanf("%s", estado1);

    printf("Digite o codigo referente a carta 1. \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade (Nome composto necessário usar - e não espaço, não usar acentos). \n");
    scanf("%s[^\n]", cidade1);// Lê espaços até a próxima linha

    printf("Digite o número da população. \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km². \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes). \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos. \n");
    scanf("%d", &pontos1);

//Inicio da coleta de dados da carta 2

    printf("\nInicie os dados da carta 2. \n");
    printf("Digite a letra referente ao estado da carta 2. \n");
    scanf("%s", estado2);

    printf("Digite o código referente a carta 2. \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade (Nome composto necessário usar - e não espaço, não usar acentos). \n");
    scanf("%s[^\n]", cidade2);// Lê espaços até a próxima linha

    printf("Digite o número da população. \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km². \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhoes). \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos. \n");
    scanf("%d", &pontos2);    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Amostragem da carta 1
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", &estado1); //Necessário usar & somente em char

    printf("Codigo: %s%s\n", &estado1, &codigocarta1);//foi necessario colocar 2 %s para ler os dois char.
    
    printf("Nome da Cidade: %s\n", &cidade1);

    printf("Populacao: %d Habitantes\n", populacao1);

    printf("Area: %.2f Km²\n", area1); //.2f aceita 2 casas decimais

    printf("PIB: R$ %.2f bilhoes de reais\n", pib1 / 1000000000); //.2f aceita 2 casas decimais

    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    densidade1 = (float) populacao1 / area1; //Cálculo da densidade populacional

    printf("Densidade Populacional: %.2f Hab/Km²\n" , densidade1);

    percapita1 = pib1 / (float) populacao1; //Cálculo do PIB per capita

    printf("PIB per Capita: R$ %.2f reais\n" , percapita1);

//Amostragem da carta 2

    printf("\nCarta 2:\n");

    printf("Estado: %s\n", &estado2);

    printf("Codigo: %s%s\n", &estado2, &codigocarta2);

    printf("Nome da Cidade: %s\n", &cidade2);

    printf("Populacao: %d Habitantes\n", populacao2);

    printf("Area: %.2f Km²\n", area2);

    printf("PIB: R$ %.2f Bilhoes de reais\n", pib2 / 1000000000);

    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    densidade2 = (float) populacao2 / area2; //Cálculo da densidade populacional cidade 2

    printf("Densidade Populacional: %.2f Hab/Km²\n" , densidade2);

    percapita2 = pib2 / (float) populacao2; //Cálculo do PIB per capita cidade 2

    printf("PIB per Capita: R$ %.2f reais\n" , percapita2);

    return 0;
}
