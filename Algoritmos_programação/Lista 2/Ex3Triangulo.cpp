//Objetivo: Saber se pode existir um triangulo com determinados tamanhos de lados
//Entrada: Tamanho dos lados
//Saida:  Se é possivel ou não um triangulo com esses lados existir

#include<stdio.h>

main(){
//declaração de variaveis
    float ladoA, ladoB, ladoC;
//comandos
    printf("Qual o tamanho do lado A: ");
    scanf("%lf", &ladoA);
    printf("Qual o tamanho do lado B: ");
    scanf("%lf", &ladoB);
    printf("Qual o tamanho do lado C: ");
    scanf("%lf", &ladoC);
//condição de existencia de um triangulo
    if (ladoA+ladoB>ladoC or ladoA+ladoC>ladoB or ladoB+ladoC>ladoA){
        printf("Impossivel formar um triangulo"); 
    }else{
        printf("Um triangulo pode ser formado com esses lados");
    };
}