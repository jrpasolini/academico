#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){

    // Área para definição das variáveis para armazenar as propriedades das cidades

printf("Vamos iniciar nosso jogo de Super Trunfo!\nPara isso, iremos coletar dados de 2 cartas distintas sobre 2 estados brasileiros\nPreencha os dados conforme solicitaado e vamos iniciar a brincadeira!\n");
char estado1[3] = "a67", estado2[3] = "b67";     // utilizei um array de 3 caracteres para garantir que a sigla do estado caiba na variavel
char codigo1[4] = "A97", codigo2[4] = "A96";         //aqui utilizei um array de 3 caracteres devido ao codigo da carta ser uma letra + 2 numreos.  
char cidade1[30] = "vilax", cidade2[30] = "vilay";     //Mesmo tamanho do array para não ter problemas com o tamanho do nome da cidade.
int populacao1 = 12323, populacao2 = 111222;         //populacao do estado em valor inteiro para as 2 cidades
float areacidade1 = 3.23, areacidade2 = 3.24;                 //usando float para armazenar em buffer numeros com casas decimais
float PIB1 = 5.12, PIB2 = 12.54;                     
int pontosturisticos1 = 11, pontosturisticos2 = 13; //entrada de pontos turisticos como valor inteiro

 // Área para entrada de dados

printf("Carta 1 - Informe a sigla do estado: ");
scanf("%s", &estado1);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%s", &codigo1);
printf("Informe o nome da cidade: ");
scanf("%s", &cidade1);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao1);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade1);
printf("Informe o PIB do estado (em R$ bilhões): ");
scanf("%f", &PIB1);
printf("Informe a quantidade de pontos turisticos do estado: ");
scanf("%d", &pontosturisticos1);

/* Aqui começamos com os dados da carta 2*/

printf("Ótimo! Agora vamos para os dados da segunda carta.\n");
printf("Carta 2 - Informe a sigla do estado: ");
scanf("%s", &estado2);
printf("Informe o codigo da carta (uma letra + 2 numeros): ");
scanf("%s", &codigo2);
printf("Informe o nome da cidade: ");
scanf("%s", &cidade2);
printf("Informe a populacao da cidade: ");
scanf("%d", &populacao2);
printf("Informe a area da cidade (em km²): ");
scanf("%f", &areacidade2);
printf("Informe o PIB do estado (em R$ bilhões): ");
scanf("%f", &PIB2);
printf("Informe a quantidade de pontos turisticos do estado: ");
scanf("%d", &pontosturisticos2);
printf("Muito bem! Agora que temos os dados das 2 cartas, vamos exibi-las para conferência: \n\n\n\n");
printf("Carta 1 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d | Area: %.2f km² | PIB: R$ %.2f bilhões | Pontos Turisticos: %d\n", estado1, codigo1, cidade1, populacao1, areacidade1, PIB1, pontosturisticos1);
printf("Carta 2 - Estado: %s | Codigo: %s | Cidade: %s | Populacao: %d | Area: %.2f km² | PIB: R$ %.2f bilhões | Pontos Turisticos: %d\n", estado2, codigo2, cidade2, populacao2, areacidade2, PIB2, pontosturisticos2);


return 0; // aqui terminamos o programa.
}
