# include <stdio.h>
int main(){
    int numerosinal = 3000000000; // valor maior que o permitido para int que é 2147483647.
    unsigned int numeroSemsinal = 3000000000; // valor permitido para unsigned int que é 4294967295 (o dobro devido a não ter que indicar o positivo ou negativo).
    printf("Valor de numero com sinal: %d\n", numerosinal); //valor será afetado pelo buffer overflow.
    printf("Valor de numero sem sinal: %u\n", numeroSemsinal); // valor não sera afetado pelo buffer overflow devido ao não uso do indicativo de sinal
  
    /* abaixo uma demonstração do uso do long int, long double e long long int */
    int numeronormal = 2147483647; // valor permitido para int que é 2147483647.
    long int numerolongo = 2147483647; // valor permitido para long int que é 2147483647.
    long long int numeromuitogrande = 2147483647; // valor permitido para long long int que é 9223372036854775807 (o dobro de um int).
    long double numeroLongDouble = 3000000000.0; // valor permitido para long double que é 1.1897314953572317650212638530309702e+4932.
printf("Valor de numero normal: %d\n", numeronormal);
printf("Valor de numero longo: %ld\n", numerolongo);
numeromuitogrande = 9223372036854775807;
printf("Valor de numero muito grande: %lld\n", numeromuitogrande);
printf("Valor de numero long double: %Lf\n", numeroLongDouble);


/* abaixo vamos trabalhar os valores sizeof de cada tipo long e short */
printf("Tamanho em bytes de um int: %zu\n", sizeof(int));
printf("Tamanho em bytes de um long int: %zu\n", sizeof(long int));
printf("Tamanho em bytes de um long long int: %zu\n", sizeof(long long int));
printf("Tamanho em bytes de um short int: %zu\n", sizeof(short int));
printf("Tamanho em bytes de um double: %zu\n", sizeof(double));
printf("Tamanho em bytes de um long double: %zu\n", sizeof(long double));
printf("Tamanho em bytes de um float: %zu\n", sizeof(float));

// outro exemplo interessante

int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    /* exemplos de double e long double para numeros precisos */
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
    

    return 0;

}