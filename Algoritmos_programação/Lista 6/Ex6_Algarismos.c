#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

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
    printf("%d POSSUI %d ALGARISMOS", num, (int)log10(num) + 1);
    //o log de um número + 1 é igual ao seu número de algarismos, levando em consideração somente a parte inteira do log

    return 0;
}