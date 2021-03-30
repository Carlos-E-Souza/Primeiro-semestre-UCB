//Objetivo: Dizer o maior de três números fornecidos pelo usuario
//Entrada: 3 números 
//Saida: O maior dos 3 números

#include<stdio.h>
#include<locale.h>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declarando variaveis
    float num1, num2, num3;
//comandos
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite um número: ");
    scanf("%f", &num2);
    printf("Digite um número: ");
    scanf("%f", &num3);
//condicional para determinar o maior número  
    if (num1>num2 and num1>num3) {
        printf("O maior número é: %1.f", num1);
    }if (num2>num1 and num2>num3) {
        printf("O maior número é: %1.f", num2);
    }if (num3>num1 and num3>num2){
        printf("O maior número é: %1.f", num3);
    }
    
}