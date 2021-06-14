#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //variaveis
    int quantidade = 0, contagem = 1, resultado = 0;
    int numeros[102];
    //comandos
    printf("QUANTOS NÚMEROS SERÃO LIDOS: ");
    scanf("%d", &quantidade);
    fflush(stdin);
    //loop para receber números
    while (contagem <= quantidade)
    {
        printf("DIGITE O %dº NÚMERO: ", contagem);
        scanf("%d", &numeros[contagem]);
        resultado += numeros[contagem];
        fflush(stdin);
        contagem++;
    }

    printf("A SOMA DE TODOS OS NÚMEROS FORNECIDOS É: %d", resultado);

    return 0;
}