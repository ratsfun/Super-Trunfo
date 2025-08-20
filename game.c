#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado1, estado2; //variavel para o estado
    char codcarta1[4], codcarta2[4]; //variavel para o codigo da carta com no maximo 2 caracteres
    char cidade1[50], cidade2[50]; //variavel para a cidade com tamanha 50
    int populacao1, populacao2, turisticos1, turisticos2; //variavel para o numero de habitantes e pontos turisticos
    float area1, area2, pib1, pib2, densipop1, densipop2, pibcapita1, pibcapita2; //variavel para a area da cidade em 
                                                                                  //quilometros quadrados,
                                                                                  //pib, densidade populacional, pib per capita

    printf("SUPER TRUNFO DE PAÍSES\n\n");
    printf("Cadastre 2 cartas com informações sobre as cidades\n\n");


    //faz a leitura da primeira carta    
    printf("Dados da Carta 1\n");
    printf("Digite 1 dos 8 estados disponíveis (A,B,C,D,E,F,G,H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (01,02,03,04): ");
    scanf("%s", &codcarta1);

    getchar(); //limpar o buffer de entrada após cada chamada de scanf com getchar()
   
    printf("Digite o nome da cidade: "); //foi usado a fgets para leitura de nomes de cidade com espaço
    fgets(cidade1, 50, stdin); //lê no máximo 49 caracteres da entrada padrão (stdin)
    cidade1[strcspn(cidade1, "\n")] = 0; //remove o \n na string

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticos1);

    densipop1 = populacao1/area1;
    pibcapita1 = pib1/populacao1;
    
    printf("\n\n");

    getchar(); //limpar o buffer de entrada após cada chamada de scanf com getchar()
    //faz a leitura dos dados da segunda carta
    printf("Dados da Carta 2\n");
    printf("Digite 1 dos 8 estados disponíveis (A,B,C,D,E,F,G,H): ");
    scanf("%c", &estado2);

    printf("Digite o código da carta (01,02,03,04): ");
    scanf("%s", &codcarta2);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    densipop2 = populacao2/area2;
    pibcapita2 = pib2/populacao2;

    printf("\n\n"); 

    //mostra na tela os dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    //pula duas linhas para separação
    printf("\n\n"); 
    //mostra na tela os dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capita: R$%.2f", pibcapita2);

    return 0;
}
