#include <stdio.h>
int main (void)
{
int i = 0;
while (i <= 200){
if (i % 2 == 0) { //apresentar apenas numros pares
    printf("%d é par!!\n", i);
} //apresentar apenas numros pares
i++;
}

// agora o exemplo de do-while

int numero; 

do {
    printf("Digite um número par sair do programa: \n");
    scanf("%d", &numero);
        if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
        } else (numero % 2 != 0); {
            printf("O número %d é ímpar. Tente novamente.\n", numero);
        }
} while (numero % 2 != 0);
printf("Você digitou um número par. Programa encerrado.\n");
return 0;
}