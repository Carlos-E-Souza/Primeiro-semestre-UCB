//Entrada: Velocidade e placa do carro
//Saida: Mensagem de multa ou nao 
//Objetivo: Dizer se na velocidade informada o carro seria multado em uma estrada com limite de 80Km/h

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
	
	return 0;
}
