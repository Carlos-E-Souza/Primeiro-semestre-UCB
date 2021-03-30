//Objetivo: Verificar se o numero e par ou impar
//Entrada: Numero qualquer
//Saida: Verificacao se e par ou impar

#include<stdio.h>
#include<math.h>

main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O numero digitado e par");
    }else{
        printf("O numero digitado e impar");
    }
    return 0;
}