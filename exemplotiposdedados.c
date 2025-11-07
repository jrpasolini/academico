#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Bruno";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: R$%.2f\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    printf("Agora vamos coletar os seus dados!\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Quanto você possui na conta hoje? ");
    scanf("%lf", &saldoBancario);
    printf("Digite a inicial do seu nome: ");
    scanf (" %c", &inicial);
    printf("Digite seu nome: ");
    scanf ("%s", &nome);
    printf ("Obrigado pelos dados!\n");
    
    return 0;
}