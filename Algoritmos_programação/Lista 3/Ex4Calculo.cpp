#include <stdio.h>
#include <iostream>
#include <locale.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int quant_vezes, resultado = 1;
    //comandos
    printf("Quantas vezes você deseja adicionar + 1: ");
    scanf("%d", &quant_vezes);
    //loop para adicionar + 1 quantas vezes o usuario quiser
    for (quant_vezes; quant_vezes > 0; quant_vezes--)
    {
        resultado = resultado + 1;
    };

    printf("O resultado final foi %d", resultado);

    return 0;
}