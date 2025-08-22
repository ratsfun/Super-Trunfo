#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Declaracao de variaveis para uso de apenas duas cartas    
    char estado1, estado2; 
    char codcarta1[4], codcarta2[4]; 
    char cidade1[50], cidade2[50]; 
    unsigned long int populacao1, populacao2; 
    int turisticos1, turisticos2; 
    float area1, area2, pib1, pib2, densipop1, densipop2, pibcapita1, pibcapita2;
    float superpoder1, superpoder2;


    printf("SUPER TRUNFO DE PAÍSES\n\n");
    printf("Cadastre 2 cartas com informações sobre as cidades\n\n");


    //faz a leitura e gravacao dos dados da carta 1
    printf("Dados da Carta 1\n");
    printf("Digite 1 dos 8 estados disponíveis (A,B,C,D,E,F,G,H): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (01,02,03,04): ");
    scanf("%3s", codcarta1);

    getchar(); //limpar o buffer de entrada após cada chamada de scanf com getchar()
   
    printf("Digite o nome da cidade: "); //foi usado a fgets para leitura de nomes de cidade com espaço
    fgets(cidade1, 50, stdin); //lê no máximo 49 caracteres da entrada padrão (stdin)
    cidade1[strcspn(cidade1, "\n")] = 0; //remove o \n na string

    printf("Digite o número de habitantes da cidade: ");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade em Bilhões: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticos1);

    //Faz o calculo da densidade populacional e pib per capita da primeira carta    
    densipop1 = populacao1/area1;
    pibcapita1 = pib1/populacao1;

    //faz calculo do super poder da carta 1
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + pibcapita1 + densipop1; 
    
    printf("\n\n");

    getchar(); //limpar o buffer de entrada após cada chamada de scanf com getchar()

    //faz a leitura e gravacao dos dados da carta 2
    printf("Dados da Carta 2\n");
    printf("Digite 1 dos 8 estados disponíveis (A,B,C,D,E,F,G,H): ");
    scanf("%c", &estado2);

    printf("Digite o código da carta (01,02,03,04): ");
    scanf("%3s", codcarta2);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade em Bilhões: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turisticos2);

    //Faz o calculo da densidade populacional e pib per capita da primeira carta    
    densipop2 = populacao2/area2;
    pibcapita2 = pib2/populacao2; 

    //faz calculo do super poder da carta 2
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + pibcapita2 + densipop2;

    printf("\n\n"); 

    //mostra na tela os dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    //pula duas linhas para separação
    printf("\n\n"); 

    //mostra na tela os dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipop2);
    printf("PIB per Capita: R$%.2f\n", pibcapita2);

    
    printf("\n\n");

    printf("Comparação de Cartas:\n")
    //Mostra a comparação das cartas
    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (area1 > area2)
    {
        printf("Área: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (turisticos1 > turisticos2)
    {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densipop1 < densipop2)
    {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (pibcapita1 > pibcapita2)
    {
        printf("Pib per Capita: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Pib per Capita: Carta 2 venceu (0)\n");
    }

    if (superpoder1 > superpoder2 && densipop1 < densipop2)
    {
        printf("Super Poder: Carta 1 venceu (1)\n");
    }
    else
    {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }


    printf("\n\n");

    return 0;
}
