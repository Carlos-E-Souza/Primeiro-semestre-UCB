//Objetivo: Retornar o módulo do número informado
//Entrada: número qualquer
//Saida: módulo do número

#include<stdio.h>

main(){
//declaração de variaveis
	int numero;
//comandos
	printf("Numero para saber o valor absoluto: ");
	scanf("%d", &numero);
//condicional
	if (numero < 0) {
		numero = -(numero);
		printf("O modulo e: %d", numero);
	}else{
		printf("O modulo e: %d", numero);
	};
	
	return 0;
}
