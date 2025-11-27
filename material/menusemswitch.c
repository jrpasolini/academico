#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
    int opcao;
    int numerosecreto, palpite, regras;

    printf("Menu principal:\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

switch (opcao) {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite seu palpite (0-9): ");
        scanf("%d", &palpite);
            if (palpite == numerosecreto) {
                printf("Parabéns! Você acertou o número secreto!\n");
                printf("O número secreto era %d.\n", numerosecreto);
            } else {
                printf("Que pena! O número secreto era %d.\n", numerosecreto);
            }
        break;
    case 2:
    printf("Regras do jogo:\n");
            printf("Seleciona a opção para ver as regras específicas.\n");
            printf("1 - Regra 1\n");
            printf("2 - Regra 2\n");
            scanf("%d", &regras);
                switch (regras) {
                    case 1:
                        printf("Regra 1: O jogador deve adivinhar um número entre 0 e 9.\n");
                        break;
                    case 2:
                        printf("Regra 2: O jogador tem apenas um palpite para acertar o número secreto.\n");
                        break;
                    default:
                        printf("Nenhuma regra selecionada.\n");
                    }
                    break;
    case 3:
        printf("Saindo do programa. Até mais!\n");
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;}
return 0;
}