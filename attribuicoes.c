#include <stdio.h>
    int main(){
        /* Atribuição simples (=)
        Atribuição com soma (+=)
        Atribuição com Subtração (-=)
        Atribuição com Multiplicação (*=)
        Atribuição com Divisão (/=)
        */
        
        int numero1, numero2, resultado= 10;
        printf("Resultado %d\n", resultado);

         resultado += 20; //resultado = resultado + 20

        printf("Resultado %d\n", resultado);
        resultado *= 2; //resultado = resultado * 2

        printf("Resultado %d\n", resultado);
        resultado -= 8;

        printf("Resultado %d\n", resultado);
        resultado /= 2; //resultado = resultado / 2
        
        printf("Resultado %d\n", resultado);


    }