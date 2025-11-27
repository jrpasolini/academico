#include <stdio.h>
int main (void) {
    short int a = 10, b = 0;
    if (a >= 0 && b >= 0) {
        printf("Os dois números são positivos.\n");
    } else {
        printf("Um desses números é negativo.\n");
    } 

short int c = 15, d = 20;
    if (c >= 0 || d >= 0) {
        printf("Pelo menos um dos numeros é negativo.\n");
    } else {
        printf("Os dois números são positivos.\n");
    }
short int e = 0;
    if (!e) {
        printf("A variavel e é zero.\n");
    } else {
        printf("A variável e não é zero.\n");
    }

short int f = -8;
    if (! (f > 0)) {
        printf("A variavel f é menor que zero.\n");
    } else {
        printf("A variável f é maior zero.\n");}

    return 0;

}