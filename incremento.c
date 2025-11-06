#include <stdio.h>
#include <windows.h>

int main(void){  
    /*
    Incremento (++)
    Pre-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pre-decremento --a
    Pós-decremento a--
    */
int numero1 = 1, resultado;
printf("Antes do incremento: %d\n", numero1);
//numero1 = numero1 + 1;
numero1++; //numero1 += 1

printf("Após o incremento: %d\n", numero1);
//numero1 = numero1 - 1;
numero1--; //numero1 -= 1
printf("Após o decremento: %d\n", numero1);
    resultado = numero1++;
    printf("Resultado do pós-incremento - numero 1:  %d\n e Resultado: %d\n", numero1, resultado);
    resultado = ++numero1;
    printf("Resultado do pré-incremento - numero 1:  %d\n e Resultado: %d\n", numero1, resultado);

    resultado = numero1--;
    printf("Resultado do pós-decremento - numero 1:  %d\n e Resultado: %d\n", numero1, resultado);
    resultado = --numero1;
    printf("Resultado do pré-decremento - numero 1:  %d\n e Resultado: %d\n", numero1, resultado);
}