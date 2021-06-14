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
    int espacos = 0, num = 0, lista1[12], lista2[12], lista3[12];
    //loop para receber números da primeira lista
    printf("DIGITE 10 NÚMEROS PARA PREENCHER A PRIMEIRA LISTA\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("DIGITE UM NÚMERO: ");
        scanf("%d", &lista1[i]);
        fflush(stdin);
    }
    //loop para receber números da primeira lista
    printf("DIGITE 10 NÚMEROS PARA PREENCHER A SEGUNDA LISTA\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("DIGITE UM NÚMERO: ");
        scanf("%d", &lista2[i]);
        fflush(stdin);
    }
    for (int i = 1; i <= 10; i++)
    {
        lista3[i] = lista1[i] + lista2[i];
    }
    printf("DIGITE UM NÚMERO PARA PESQUISAR NA LISTA 3: ");
    scanf("%d", &num);
    fflush(stdin);
    for (int i = 1; i <= 10; i++)
    {
        if (num == lista3[i])
        {
            printf("ESSE NÚMERO EXISTE NA LISTA 3 E ESTA NA POSIÇÃO %d\n", i);
        }
    }
    return 0;
}