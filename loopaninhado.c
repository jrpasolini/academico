#include <stdio.h>
int main (void)
{
/* exemplo com o for */
printf("Tabuada de multiplicação de 1 a 10:\n");
printf("Usando for:\n");
    for (int i = 1; i <= 10; i++)
    { 
        for (int j = 1; j <= 10; j++)
        {
        printf("%d \t", i * j);

        }
    printf("\n");      
    }
 /* exemplo com while */
 printf("Agora com while:\n");
    int linha = 1;
    while (linha <= 10)
    {
        int coluna = 1;
        while (coluna <= 10)
        {
            printf("%d \t", linha * coluna);
            coluna++;
        }
    printf("\n");
    linha++;
    }
/* exemplo com do-while */
printf("Agora com do-while:\n");
    int lin = 1;
    do
    {
        int col = 1;
        do
        {
            printf("%d \t", lin * col);
            col++;
        } while (col <= 10);
        printf("\n");
        lin++;
    } while (lin <= 10);

/* exemplo com calculo de triangulo */
int n = 5; // altura do triângulo
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
/* fogos de artifício */
     int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 2000000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}