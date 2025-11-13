#include <stdio.h>
int main (void){
    /* declarando as variáveis */
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;
char nomearmazem[50] = "Armazém Central";
    /* coletando dados*/
    printf("-x-x-x-x-x-x- Programa de Segurança do Armazém -x-x-x-x-x-x-\n");
printf("Insira o nome do armazém: ");
    fgets(nomearmazem, 50, stdin);
    printf("Insira a temperatura atual do armazém (em °C): \n");
    scanf("%f", &temperatura);
    printf("Insira a umidade atual do armazém (em %%): \n"); 
    scanf("%f", &umidade);
    printf("Insira a quantidade atual em estoque: \n");
    scanf("%u", &estoque);

    /* verificação de segurança dos valores */

if (temperatura < 30.0) { 
    printf(" A temperatura está alta\n");
} else { printf(" A temperatura está dentro dos parametros\n"); }
if (umidade < 50) {
    printf("Umidade em estado crítico\n");
} else {
    printf("Umidade dentro dos parametros\n");
}
if (estoque < estoqueminimo) {
    printf("Estoque abaixo do mínimo, cuidado\n");
} else {
    printf("Estoque dentro dos parametros\n");
}

    return 0;


}