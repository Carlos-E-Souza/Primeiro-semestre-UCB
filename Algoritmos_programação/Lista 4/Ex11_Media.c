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
    int num = 1, contagem = 0, par = 0, final = 0;
    float media = 0;
    //loop para menu interativo e receber dados
    while (num != 0)
    {
        printf("PARA FINALIZAR DIGITE 0: ");
        scanf("%d", &num);
        printf("DIGITE UM NÚMERO PAR: ");
        scanf("%d", &par);
        if (par % 2 == 0)
        {
            contagem++;
            final += par;
        }
    }

    media = final / contagem;
    printf("A MÉDIA ARITMÉTICA FOI: %.2f", media);

    return 0;
}