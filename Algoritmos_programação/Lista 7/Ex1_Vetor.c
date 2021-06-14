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
    int contagem = 1;
    int notas[32];
    //loop para receber notas
    while (contagem <= 30)
    {
        printf("DIGITE A NOTA DO %dº ALUNO: ", contagem);
        scanf("%d", &notas[contagem]);
        fflush(stdin);
        contagem++;
    }
    //loop para imprimir notas
    for (int i = 1; i <= 30; i++)
    {
        printf("NOTA %d: %d\n", i, notas[i]);
    }

    return 0;
}