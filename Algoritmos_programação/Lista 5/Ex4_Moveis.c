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
    float num = 0;
    //comandos
    printf("ESCOLHA UM PRODUTO\n");
    printf("1-CADEIRA\n2-MESA DE COMPUTADOR\n3-ESTANTE DE LIVROS\n4-MESA DE IMPRESSORA\n5-ESTANTE DE CD's\n");
    scanf("%d", &num);
    if (num < 1 || num > 5)
    {
        printf("PRODUTO INDISPONIVEL");
    }
    else
    {
        printf("PRODUTO DISPONIVEL");
    }

    return 0;
}