#include <stdio.h>
int main (void)
{
int numero, i;
printf("Tabuada de 0 a 10:\n");
printf("Digite um número para ver a tabuada de 0 a 10:\n");
scanf("%d", &numero);

    for (i = 0; i <= 10; i++) {
        printf("Tabuada do %d:\n", i);
        for (numero = 0; numero <= 10; numero++) {
            printf("%d x %d = %d\n", i, numero, i * numero);
        }
        printf("\n");
    }

return 0;
}