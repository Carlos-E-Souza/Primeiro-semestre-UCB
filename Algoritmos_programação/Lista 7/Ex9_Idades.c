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
    int idades[102], ponteiros[102];
    int total = 0, maior = 0, contagem = 0;
    //comandos
    printf("QUANTAS IDADES DESEJA INSERIR: ");
    scanf("%d", &contagem);
    fflush(stdin);
    //loop para receber idades
    for (int i = 1; i <= contagem; i++)
    {
        printf("%dº IDADE: ", i);
        scanf("%d", &idades[i]);
        fflush(stdin);
        total += idades[i];
        if (idades[i] > maior)
        {
            maior = idades[i];
        }
    }
    for (int i = 1; i <= contagem; i++)
    {
        if (idades[i] == maior)
        {
            ponteiros[i] = i;
        }
    }
    printf("A MÉDIA DE IDADES FOI: %d\n", total / contagem);
    printf("A MAIOR IDADE É %d E APARECE NA(S) POSIÇÃO(ÕES): ", maior);
    for (int i = 1; i <= contagem; i++)
    {
        if (ponteiros[i] == i)
        {
            printf("%d ", ponteiros[i]);
        }
    }

    return 0;
}