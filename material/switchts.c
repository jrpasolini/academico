#include <stdio.h>
int main (){
    
    int opcao;
    float saldo = 1000.0;
    printf("Digita a opção desejada: ");
    printf("\n1 - Verificar saldo");
    printf("\n2 - Depositar");
    printf("\n3 - Sacar\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu verificar saldo.\n");
            printf("Saldo atual: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Você escolheu depositar.\n");
            break;
        case 3:
            printf("Você escolheu sacar.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
return 0;
}