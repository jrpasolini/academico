#include <stdio.h>

int main (void)
{
char reply;
    do {

int numero = 1;
printf("Vamos contar até 1000?\n");
    while (numero <= 1000)
    {
        printf("Número: %d\n", numero);
        numero++;
    }

int numero2 = 1;
printf("Escolha um numero qualquer ou escolha um numero negativo para sair do programa: ");
scanf("%d", &numero2);
     while (numero2 >= 0)
    {
        printf("Número que vc escolheu: %d\n", numero2);
        printf("Escolhe outro numero ou um numero negativo para sair do programa: ");
        scanf("%d", &numero2);
    };
printf("Agora vamos utilizar a função do-while!\n");
int numero3;
    do
        {
        printf("Escolha um numero qualquer ou escolha um numero negativo para sair do programa: ");
        scanf("%d", &numero3);
        if (numero3 >= 0)
        {
            printf("Número que vc escolheu: %d\n", numero3);
        }
    } while (numero3 >= 0);

    for
    (int a = 100; a >= 0; a--)
    {
        printf("Número do for: %d\n", a);
    }

printf("Deseja repetir todo o programa? (S/N): ");
scanf(" %c", &reply);

    } while (reply == 's' || reply == 'S');
printf("Programa finalizado. Obrigado por participar!\n");
    return 0;   
}