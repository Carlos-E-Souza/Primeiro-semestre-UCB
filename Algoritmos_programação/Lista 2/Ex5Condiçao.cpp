//mesmos exercicios com mensagem quando a condicao de existencia for falsa

#include <stdio.h>

main() {
//declarando variaveis
	int velocidade;
	char placa;

	printf("Qual a velocidade do carro(Km/h): ");
	scanf("%d", &velocidade);
	printf("Qual a placa do carro: ");
	scanf("%lf", placa);
//condicional de verificacao
	if (velocidade > 80) {
		printf("Voce seria multado com essa velocidade no eixo rodoviario");
	}else{
		printf("Voce nao seria multado no eixo rodoviario");
		};
	

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
	return 0;
}