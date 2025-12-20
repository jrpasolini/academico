#include <stdio.h>
int main (void){

    /* aqui abaixo vamos declarar as variaveis para o opção do menu e calculo das médias escolares */
    short int opcao;
    float semestre1, semestre2, media;
    printf("Bem vindo ao sistema de cálculo de médias escolares!\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1 - Calcular média de duas notas\n");
    printf("2 - Determinar status\n");
    printf("Sair do programa\n");
    printf("Digite sua opção: ");

    scanf("%hd", &opcao);
switch (opcao)
{
    case 1:
        printf("Digite a primeira nota do semestre: ");
        scanf("%f", &semestre1);
        printf("Digite a segunda nota do semestre: ");
        scanf("%f", &semestre2);
        // teste condição se sa nota é válida e está entre >=0 e <=10 
        if ((semestre1 >= 0 && semestre1 <= 10 ) && (semestre2 >= 0 && semestre2 <= 10)) {printf("Nota válida!\n");
            media = (semestre1 + semestre2) / 2;
            printf("A média das notas é: %.2f\n", media);        
        } else {printf("Nota inválida! As notas devem estar entre 0 e 10.\n"); return 1;}
       break; 
        case 2:
        printf("Determinar status\nDigite o valor da média: ");
        scanf("%f", &media);
        // media >= 5 ? printf("Aluno aprovado!\n") : printf("Aluno reprovado!\n");
        /* modelo para quem fica de recuperação*/
        if (media >= 7) {
            printf("Aluno aprovado!\n");
        } else if (media >= 5) {
            printf("Aluno em recuperação!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
        
        break;
        case 3:
        printf("Saindo do programa. Até mais!\n");
        break;
    
}}