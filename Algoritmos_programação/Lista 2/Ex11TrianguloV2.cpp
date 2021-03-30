//Objetivo: Dizer se é possivel criar um triangulo com os números fornecidos e que tipo de triangulo
//Entrada: 3 lados do triangulo
//Saida: O tipo de triangulo que é formado com esses lados 

#include<stdio.h>
#include<locale.h>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declaração de variaveis
    int ladoA, ladoB, ladoC;
//comandos
    printf("Qual o tamanho do lado A: ");
    scanf("%d", &ladoA);
    printf("Qual o tamanho do lado B: ");
    scanf("%d", &ladoB);
    printf("Qual o tamanho do lado C: ");
    scanf("%d", &ladoC);
//condição de existencia de um triangulo
    if (ladoA+ladoB<ladoC || ladoA+ladoC<ladoB || ladoB+ladoC<ladoA){
        printf("Impossivel formar um triangulo"); 
    }else{
        if (ladoA == ladoB and ladoB == ladoC) {
            printf("Esse triangulo é equilátero");
        }if (ladoA == ladoB and ladoB != ladoC or ladoA == ladoC and ladoC != ladoB || ladoB == ladoC and ladoC != ladoA){
            printf("Esse triangulo é isósceles");
        }if (ladoA != ladoB and ladoB !=ladoC and ladoA != ladoC){
            printf("Esse triangulo é escaleno");
        }
    }
}