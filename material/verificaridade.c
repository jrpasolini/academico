#include <stdio.h>
int main(void){
int idade = 10;
float temperatura = 46.5;
int nota = 65;

    if (idade >= 18){
    printf ("Voce e maior de idade.\n"); //  será executado SE a condição for verdadeira
    printf ("Dentro IF\n");} // sera executado SE a condição for verdadeira

    printf ("Fora IF\n"); // sempre sera executado

printf ("Agora vamos para a temperatura.\n");
        if (temperatura >= 30.0){
            printf ("Esta muito quente!\n");
        } else if (temperatura < 0){
            printf ("Esta gelado pra caralho, congelando!!!!!\n");
        } else if (temperatura >= 40.0){
            printf ("Tá calor pra caralho, vamos ficar pelados!!\n");
        }
        else {
            printf ("Esta muito frio!\n");
        }

printf ("Agora vamos para a nota.\n");
        if (nota >= 60){
            printf ("Parabens! Você passou.\n");
                    }

int idade1 = 45, idade2 = 30;
if (idade1 > idade2){
    printf("A pessoa 1 e mais velha que a pessoa 2.\n");}

    int numero = 7, resultado;
    resultado = numero % 2;
    printf("A variavel resultado tem o valor de: %d\n", resultado);
    
    //if (numero % 2 == 0){
       // printf("O numero e par.\n");
    //}
    if (resultado == 0){ // fazendo a mesma coisa de uma forma diferente
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }
    

    return 0;
}