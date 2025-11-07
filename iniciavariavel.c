#include <stdio.h> /* chama a biblioteca stdio */


int main() {
    int idade;
    int quantidade = 10;
    float altura = 1.66;
    double peso = 90.3;
    char letra = 'P';
    char nome[20] = "Pasolini"; /* define o array para 20 caracteres */
    char opcao = 'S';

    idade = 40; /* lançamento de idade na variavel */
    quantidade = 10; /* substituindo o valor de 1 para 10 */

    printf("A idade do %s é: %d anos\n", nome, idade);
    printf("A altura é %.2fm\n", altura);
    printf("A opção é: %c\n", opcao);
    
    return 0;




}

/* Inicialização de variáveis

Inicializar uma variável significa colocar um valor inicial dentro da caixa. Isso pode ser feito na mesma linha em que você declara a variável ou depois, no meio do seu código. Vamos ver alguns exemplos!

 

int idade = 25;        // Declara "idade" e atribui o valor 25
 
float altura;           // Declara "altura" sem inicializar
 
altura = 1.75;         // Atribui o valor 1.75 a "altura" posteriormente
 
double salario = 3000.50; // Declara "salario" e atribui o valor 3000.50
 
char opcao = 'S';        // Declara "opcao" e atribui o caractere ‘S’
 
Aqui, estamos criando as variáveis e colocando valores iniciais nelas ao mesmo tempo.
*/