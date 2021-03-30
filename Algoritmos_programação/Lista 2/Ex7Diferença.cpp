//Objetivo: Fazer a diferenca do maior numero pelo menor
//Entrada: Numeros inteiros
//Saida: diferenca do maior pelo menor

#include<stdio.h>

main() {
    int num1, num2, resultado;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num2 > num1) {
        resultado = num2 - num1;
        printf("A diferenca do maior numero pelo menor e: %d", resultado);
    }else{
        resultado = num1 - num2;
        printf("A diferenca do maior numero pelo menor e: %d", resultado);
    }
}
