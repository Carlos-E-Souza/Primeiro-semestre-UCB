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
    int dado1 = 1, dado2 = 6;
    //comandos
    printf("POSSIBILIDADES DA SOMA DE 2 DADOS DAR 7\n");
    //loop para mostrar as possibilidades
    for (int i = 1; i <= 6; i++)
    {
        printf("POSSIBILIDADE %dº: ", i);
        printf("%d-%d\n", dado1, dado2);
        dado1++;
        dado2--;
    }
    return 0;
}