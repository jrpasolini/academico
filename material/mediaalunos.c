#include <stdio.h>

int main (void){
    char nome[50] = "Fulano de Tal";
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0;

   
printf("-x-x-x-x-x-x- Programa para calcular a média de um aluno -x-x-x-x-x-x-\n");
    printf("insira o nome do aluno: ");
    fgets(nome, 50, stdin);
    printf("insira a primeira nota do aluno: \n", nota1);
    scanf("%f", &nota1);
    printf("insira a segunda nota do aluno: \n");
    scanf("%f", &nota2);
    printf("insira a terceira nota do aluno: \n");
    scanf("%f", &nota3);
    printf("insira a quarta nota do aluno: \n");
    scanf("%f", &nota4);
    float total = nota1 + nota2 + nota3 + nota4;
    printf("O total das notas do aluno %s é: %.2f\n", nome, total);
    float media = total / 4;
    printf("A média do aluno %s é: %.2f\n", nome, media);
 if (media >= 5.0){
        printf("Parabéns, %s! Você foi aprovado!\n", nome);
    } else if (media >= 3.0 && media < 5.0){
        printf("Atenção, %s! Você está de recuperação.\n", nome);
    } else {
        printf("Infelizmente, %s, você foi reprovado. Tente novamente!\n", nome);
    }
    return 0;

}