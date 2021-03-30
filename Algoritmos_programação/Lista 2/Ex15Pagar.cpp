//Objetivo: Calcular o valor a pagar pela a internet
//Entrada: Horas usando a internet 
//Saida: Valor a ser pago

#include<stdio.h>
#include<locale.h>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declarando variaveis
    int horas, fatura;
//comandos
    printf("Por quantas horas você utilizou a internet? ");
    scanf("%d", &horas);
//condicional
    if (horas>20) {
        horas = horas - 20;
        fatura = horas*3 + 30;
        printf("Você deve pagar R$%d", fatura);
    }else{
        printf("Você deve pagar R$30");
    }
}