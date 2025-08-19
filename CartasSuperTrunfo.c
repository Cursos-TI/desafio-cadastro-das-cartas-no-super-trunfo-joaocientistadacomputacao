#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Joao Paulo de Souza

int main() {
    Printf("Desafio Super Trunfo - Cadastro de Cartas de Cidades\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

//Declaração de variáveis da carta1
    int populacao1, pontos1;
    float area1, pib1;
    char estado1[5], codigocarta1[5], cidade1[25];

//Declaração de variáveis da carta2
    int populacao2, pontos2;
    float area2, pib2;
    char estado2[2], codigocarta2[2], cidade2[15];

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

    printf("Digite no nome da cidade (Nome composto necessário usar - e não espaço, não usar acentos). \n");
    scanf("%s[^\n]", cidade1);// Lê espaços até a próxima linha

    printf("Digite o número da população. \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade. \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (Digite sem os centavos). \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos. \n");
    scanf("%d", &pontos1);

//Inicio da coleta de dados da carta 2

    printf("\nInicie os dados da carta 2. \n");
    printf("Digite a letra referente ao estado da carta 2. \n");
    scanf("%s", estado2);

    printf("Digite o código referente a carta 2. \n");
    scanf("%s", codigocarta2);

    printf("Digite no nome da cidade (Nome composto necessário usar - e não espaço, não usar acentos). \n");
    scanf("%s[^\n]", cidade2);// Lê espaços até a próxima linha

    printf("Digite o número da população. \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade. \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (Digite sem os centavos). \n");
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

    printf("Area: %.1f Km\n", area1); //.1f aceita 1 casas decimais

    printf("PIB: R$ %.2f\n", pib1); //.2f aceita 2 casas decimais

    printf("Numero de Pontos Turisticos: %d\n", pontos1);

//Amostragem da carta 2

    printf("\nCarta 2:\n");

    printf("Estado: %s\n", &estado2);

    printf("Codigo: %s%s\n", &estado2, &codigocarta2);

    printf("Nome da Cidade: %s\n", &cidade2);

    printf("Populacao: %d Habitantes\n", populacao2);

    printf("Area: %.1f Km\n", area2);

    printf("PIB: R$ %.2f\n", pib2);

    printf("Numero de Pontos Turisticos: %d\n", pontos2);



    return 0;
}
