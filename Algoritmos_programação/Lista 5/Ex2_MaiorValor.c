#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //variaveis
    float valor = 0, maior = 0;
    //comandos
    for (int i = 1; i <= 3; i++)
    {
        printf("DIGITE UM NÚMERO: ");
        scanf("%f", &valor);
        if (valor > maior)
        {
            maior = valor;
        }
    }
    system("CLS");
    printf("O MAIOR VALOR FOI: %.2f", maior);

    return 0;
}