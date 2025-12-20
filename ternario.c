#include <stdio.h>
int main(void){
char continuar;
do {
short int idade;
printf("Qual a sua idade? ");
scanf("%hd", &idade); // aqui a entrada para o short int usa o especificador
idade >= 18 ? printf("Você é maior de idade.\n") : printf("Você é menor de idade.\n");
printf("Deseja verificar novamente? (s/n): ");
scanf(" %c", &continuar);
} while (continuar == 'S' || continuar == 's');
printf("Obrigado por usar o verificador de maioridade!\n");
return 0;
}