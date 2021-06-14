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
    int opcao = 0;
    //loop
    while (true)
    {
        printf("MENU DE OPÇÕES\n");
        printf("1-NORTE\n2-NORDESTE\n3-CENTRO-OESTE\n4-SUDESTE\n5-SUL\n0-SAIR\n");
        opcao = getch(); //função para pegar o caracter selecionado
        //condicionais para opções disponiveis
        if (opcao - 48 == 1)
        {
            system("CLS");
            printf("NORTE\n");
            system("PAUSE");
            system("CLS");
        }
        if (opcao - 48 == 2)
        {
            system("CLS");
            printf("NORDESTE\n");
            system("PAUSE");
            system("CLS");
        }
        if (opcao - 48 == 3)
        {
            system("CLS");
            printf("CENTRO-OESTE\n");
            system("PAUSE");
            system("CLS");
        }
        if (opcao - 48 == 4)
        {
            system("CLS");
            printf("SUDESTE\n");
            system("PAUSE");
            system("CLS");
        }
        if (opcao - 48 == 5)
        {
            system("CLS");
            printf("SUL\n");
            system("PAUSE");
            system("CLS");
        }
        if (opcao - 48 == 0)
        {
            system("CLS");
            break;
        }
    }

    return 0;
}