#include <stdio.h>
int main (void) {
    short int idade = 20;
    float altura = 1.46;

printf ("Digita sua idade:\n");
    scanf ("%hd", &idade);
printf ("Digita sua altura:\n");
    scanf ("%f", &altura);

    if (idade >= 18 && idade <=30 && altura >= 1.60) {
        printf("A pessoa é maior de idade e tem altura suficiente.\n");
    } else {
        printf("A pessoa não atende aos requisitos de idade ou altura.\n");
    }
printf ("Agora vamos ver se você é criança, adolescente, adulto ou velho:\n");

    if (idade <=12) {
        printf ("Você ainda é uma criança\n");
    } else if (idade >=13 && idade <=17) {
        printf ("Você é um adolescente\n");
    } else if (idade >=18 && idade <=59) {
        printf ("Você é um adulto\n");
    } else if (idade >=60) {
        printf ("Você é virou um um idoso\n");
    } else {
        printf ("Idade inválida\n");
    }
printf ("Agora vamos ver qual seu grupo de altura:\n");
    if (altura < 1.20) {
        printf ("Você é um pigmeu\n");
    } else if (altura >= 1.20 && altura <=1.59) {
        printf ("Você é anão\n");
    } else if (altura >= 1.60 && altura <=1.80) {
        printf ("Você tem altura média\n");
    } else if (altura >= 1.81 && altura <=2.0) {
        printf ("Você é alto\n");
    } else if (altura > 2.0) {
        printf ("Você é um GIGANTE\n");
    }
    else {
        printf ("Altura inválida\n");
    } 
    printf ("Fim do programa\n");


return 0;

}