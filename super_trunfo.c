#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){

    // Área para definição das variáveis para armazenar as propriedades das cidades

printf("Vamos iniciar nosso jogo de Super Trunfo!\nPara isso, iremos coletar dados de 2 cartas distintas sobre 2 estados brasileiros\nPreencha os dados conforme solicitaado e vamos iniciar a brincadeira!\n");
char estado1[3] = "a67", estado2[3] = "b67";     // utilizei um array de 3 caracteres para garantir que a sigla do estado caiba na variavel
char codigo1[4] = "A97", codigo2[4] = "A96";         //aqui utilizei um array de 3 caracteres devido ao codigo da carta ser uma letra + 2 numreos.  
char cidade1[50] = "vilax", cidade2[50] = "vilay";     //Mesmo tamanho do array para não ter problemas com o tamanho do nome da cidade.
int populacao1 = 12323, populacao2 = 11122;         //populacao do estado em valor inteiro para as 2 cidades
float areacidade1 = 1, areacidade2 = 1, PIB1 = 1, PIB2 = 1, densidade1, densidade2, pibpercapita1, pibpercapita2;                //usando float para armazenar em buffer numeros com casas decimais
int pontosturisticos1 = 1, pontosturisticos2 = 1; //entrada de pontos turisticos como valor inteiro

 // Área para entrada de dados

printf("Carta 1 - Informe a sigla do estado: ");
scanf("%s", &estado1);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%3s", &codigo1);
printf("Informe o nome da cidade: ");
getchar();
    fgets(cidade1, 50, stdin);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao1);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade1);
printf("Informe o PIB da cidade (em R$ bilhões): ");
scanf("%f", &PIB1);
printf("Informe a quantidade de pontos turisticos da cidade: ");
scanf("%d", &pontosturisticos1);

/* Aqui começamos com os dados da carta 2*/

printf("Ótimo! Agora vamos para os dados da segunda carta.\n");
printf("Carta 2 - Informe a sigla do estado: ");
scanf("%s", &estado2);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%3s", &codigo2);
printf("Informe o nome da cidade: ");
getchar();
    fgets(cidade2, 50, stdin);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao2);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade2);
printf("Informe o PIB da cidade (em R$ bilhões): ");
scanf("%f", &PIB2);
printf("Informe a quantidade de pontos turisticos da cidade: ");
scanf("%d", &pontosturisticos2);
printf("Muito bem! Agora que temos os dados das 2 cartas, vamos exibi-las para conferência: \n\n\n\n");
printf("Carta 1 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d habitantes | Area: %.1f km² | PIB da cidade: R$ %.2f bilhões | Pontos Turisticos: %d\n", estado1, codigo1, cidade1, populacao1, areacidade1, PIB1, pontosturisticos1);
printf("Carta 2 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d habitantes | Area: %.1f km² | PIB da cidade: R$ %.2f bilhões | Pontos Turisticos: %d\n", estado2, codigo2, cidade2, populacao2, areacidade2, PIB2, pontosturisticos2);


/* Aqui calculamos a densidade populacional e o PIB per capita das 2 cidades */

densidade1 = (float) populacao1 / areacidade1; // calculo da densidade populacional da cidade 1, convertendo dados da variavel populacao para float para evitar perda de dados na divisao
densidade2 = (float) populacao2 / areacidade2; // calculo da densidade populacional da cidade 2, convertendo dados da variavel populacao para float para evitar perda de dados na divisao
pibpercapita1 = PIB1  / (float)populacao1; // calculo do PIB per capita do Cidade 1
pibpercapita2 = PIB2  / (float)populacao2; // calculo do PIB per capita do Cidade 2

printf ("E aqui vão alguns dados extras: \n");
printf("Densidade Populacional - %s: %.2f habitantes/km²\n", cidade1, densidade1);
printf("Densidade Populacional - %s: %.2f habitantes/km²\n", cidade2, densidade2);
printf("PIB per Capita - %s: R$ %.2f\n", cidade1, pibpercapita1 * 10000000); //multiplicando por mil para converter o valor do PIB per capita para reais
printf("PIB per Capita - %s: R$ %.2f\n", cidade2, pibpercapita2 * 10000000);

return 0; // aqui terminamos o programa.
}