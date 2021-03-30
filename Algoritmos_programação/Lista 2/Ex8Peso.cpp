//Objetivo: Calcular o peso ideal da pessoa a partir da altura
//Entrada: Altura e sexo
//Saida: Peso ideal para a pessoa

#include<stdio.h>
#include<stdlib.h>


main() {
    float altura, peso;
    char sexo;

    printf("Qual a sua altura: ");
    scanf("%f", &altura);
    printf("Sexo(M/F): ");
    scanf("%s", &sexo);

    if(sexo == 'm' or sexo == 'M'){
        peso = 72.5 * altura - 58;
        printf("O peso ideal para voce seria: %.1f", peso);
    }else{
        peso = 62.1 * altura - 44.7;
        printf("O peso ideal para voce seria: %.1f", peso);
    }
}