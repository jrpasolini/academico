#include <stdio.h>
int main (void){
/* Vamos declarar algumas variaveis utilizando o short int e unsigned int para um controle de estoque */
char produtoa[30] = "Produto A", produtob[30] = "Produto B", produtoc[30] = "Produto C"; // aqui declarei valores padrão para nomes dos produtos

unsigned short int estoquea = 150; // estoque inicial do produto A
unsigned short int estoqueb = 200; // estoque inicial do produto B
unsigned short int estoquec = 300; // estoque inicial do produto C

float valora = 10.50; // valor do produto A em R$
float valorb = 20.75; // valor do produto B em R$
float valorc = 30.00; // valor do produto C em R$

unsigned short int estoqueminimoa = 200; // estoque mínimo para reabastecimento
unsigned short int estoqueminimob = 75; // estoque mínimo para reabastecimento
unsigned short int estoqueminimoc = 100; // estoque mínimo para reabastecimento

double valortotala;
double valortotalb;
double valortotalc;

short int resultadoa, resultadob, resultadoc;

/* Informações dos produtos */
printf("O produto %s tem um estoque de %u e o valor de unitário é R$ %.2f\n", produtoa, estoquea, valora);
printf("O produto %s tem um estoque de %u e o valor de unitário é R$ %.2f\n", produtob, estoqueb, valorb);
printf("O produto %s tem um estoque de %u e o valor de unitário é R$ %.2f\n", produtoc, estoquec, valorc);


/* compareções com valor mínimo de estoque */
resultadoa = estoquea > estoqueminimoa;
resultadob = estoqueb > estoqueminimob;
resultadoc = estoquec > estoqueminimoc;

printf("O produto %s estã com estoque suficiente? %d (1-Sim, 0-Não)\n", produtoa, resultadoa);
printf("O produto %s estã com estoque suficiente? %d (1-Sim, 0-Não)\n", produtob, resultadob);
printf("O produto %s estã com estoque suficiente? %d (1-Sim, 0-Não)\n", produtoc, resultadoc);

/* comparações entre valores totais dos produtos*/

printf("O valor total do produto produto A (R$ %.2f) é maior do que o produto B(R$ %.2f)? %d (1-Sim, 0-Não)\n", estoquea * valora, estoqueb * valorb, (estoquea * valora) > (estoqueb * valorb));
printf("O valor total do produto produto B (R$ %.2f) é maior do que o produto C(R$ %.2f)? %d (1-Sim, 0-Não)\n", estoqueb * valorb, estoquec * valorc, (estoqueb * valorb) > (estoquec * valorc));
printf("O valor total do produto produto A (R$ %.2f) é maior do que o produto C(R$ %.2f)? %d (1-Sim, 0-Não)\n", estoquea * valora, estoquec * valorc, (estoquea * valora) > (estoquec * valorc));

/* finalização do código  e despedida */
printf("Obrigado por utilizar o sistema de controle de estoque!\n :)");


return 0;

}