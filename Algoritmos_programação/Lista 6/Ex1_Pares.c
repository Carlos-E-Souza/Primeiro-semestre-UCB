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
    int num = 0;
    //comandos
    printf("DIGITE UM NÚMERO: ");
    scanf("%d", &num);

    if (num > 2000)
    {
        printf("%d EXCEDE O LIMITE DE CÁLCULO!", num);
    }
    printf("NÚMEROS PARES ATÉ 2000:\n");
    while (num <= 2000)
    {
        if (num % 2 == 0)
        {
            printf("-%d-", num);
        }
        num++;
    }

    return 0;
}