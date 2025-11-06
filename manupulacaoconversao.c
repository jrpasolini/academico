#include <stdio.h>
int main (void){
/*
    int a = 10;
    float  b = 3.5;
    float resultado = a + b; // conversão implícita de int para float
    
    
    printf("Resultado da soma (int + float): %.2f\n", resultado);
*/
int a = 10, b = 3;
float quociente = (float) a / b; // variavel 'a' é convertida para float --> conversão explícita de int para float

printf("Quociente (com conversão explícita): %.2f\n", quociente);

    return 0;
}