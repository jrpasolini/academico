#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    short int numerojogador, numerocomputador, resultado = 0;
    char tipocomparacao;

    //gerando numero aleatório para o computador
    srand(time(0));
    numerocomputador = rand() % 100 + 1;  // numero entre 1 e 100
printf ("Bem vindo ao jogo de maior, menor ou igual!\n");
do {
    printf("Digite um número entre 1 e 100: ");
    scanf("%hd", &numerojogador);  // %hd porque é short int
} while (numerojogador < 1 || numerojogador > 100);
printf("Escolha o tipo de comparação:'\n");
printf("M - Maior que\n");
printf("N - Menor que\n");
printf("I - Igual a\n");
scanf(" %c", &tipocomparacao);
printf("O número do computador é: %hd\n", numerocomputador);
switch (tipocomparacao)
{
    case 'M':
    case 'm':
        resultado = numerojogador > numerocomputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        resultado = numerojogador < numerocomputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        resultado = numerojogador == numerocomputador ? 1 : 0;
        break;
    default:
        printf("Opção inválida! Escolha M, N ou I.\n");
        break;
        }
if (resultado == 1) {
    printf("Parabéns! Você venceu!\n");
} else {
    printf("Que pena! Você perdeu. Tente novamente.\n");
}
return 0;
}
