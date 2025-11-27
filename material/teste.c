#include <stdio.h>
 
int main() {
    int idade = 21;
    char nome[20] = "Pasolini";
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    printf("Agora digita o seu nome abaixo: \n");
    scanf("%s", &nome);
    printf("Seu nome é %s\n", nome);
    return 0;
}


/* Entrada de Dados com scanf (Lendo Strings)


A função scanf também pode ser usada para ler strings do usuário, mas com uma importante ressalva: por padrão, ela lê apenas até o primeiro espaço em branco. Isso significa que se o usuário digitar um nome completo (com espaços), apenas a primeira parte do nome (até o primeiro espaço) será lida.

 

char nome[50];
 
printf("Digite seu nome: ");
 
scanf("%s", nome);
 

printf("Nome digitado: %s\n", nome);
 

Se o usuário digitar "João da Silva", apenas "João" será armazenado em nome. "da Silva" será deixado no buffer de entrada e poderá causar problemas em leituras subsequentes.

 

Lendo Strings com Espaços: fgets

 

Para ler strings com espaços em branco, a função fgets é a melhor opção. Ela lê uma linha inteira da entrada, incluindo espaços, até encontrar um caractere de nova linha (\n) ou atingir o tamanho máximo especificado.

 

char nome[50];
 
printf("Digite seu nome completo: ");
 
fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin)
 

// fgets inclui o '\n' na string, então podemos removê-lo se necessário
 
nome[strcspn(nome, "\n")] = 0;
 

printf("Nome completo digitado: %s\n", nome);
 

fgets recebe três argumentos:
O array onde a string será armazenada.
O tamanho máximo da string (incluindo o \n e o \0).
O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
 

A linha nome[strcspn(nome, "\n")] = 0; remove o caractere de nova linha (\n) que fgets pode incluir na string. strcspn retorna o índice da primeira ocorrência de \n na string nome.*/