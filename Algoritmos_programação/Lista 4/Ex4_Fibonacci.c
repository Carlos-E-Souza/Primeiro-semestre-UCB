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
    int num_ant = 0, prox_num = 1, num = 0;
    //comandos
    printf("SEQUENCIA DE FIBONACCI: ");
    printf("0-");
    //loop para calcular e mostrar a sequencia
    for (int i = 1; i <= 20; i++)
    {
        printf("-%d-", prox_num);
        num = prox_num;
        prox_num = prox_num + num_ant;
        num_ant = num;
    }
    return 0;
}