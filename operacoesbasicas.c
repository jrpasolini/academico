#include <stdio.h>
// Operações Básicas em C

int main(){
     /* 
     Soma (+)
     Subtração (-)
     Multiplicação (*)
     Divisão (/)
     */
char nome [20] = "nome";
printf("Digite seu nome:\n");
scanf("%s", nome);
printf("Olá, %s! Vamos realizar algumas operações matemáticas básicas.\n", nome);
     int numero1, numero2;
     int soma, subtracao, multiplicacao, divisao;
     printf("Entre com o numero 1:\n" );
     scanf("%d", &numero1);
     printf("Entre com o numero 2:\n" );
     scanf("%d", &numero2);
     soma = numero1 + numero2; //operação soma
     subtracao = numero1 - numero2; //operação subtração
     multiplicacao = numero1 * numero2; //operação multiplicação
     divisao = numero1 / numero2; //operação divisão
printf ("A Soma é: %d\n", soma);
printf ("A Subtração é: %d\n", subtracao);
printf ("A Multiplicação é: %d\n", multiplicacao);
printf ("A Divisão é: %d\n", divisao);
return 0;
}






