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
    int num[4] = {0, 0, 0, 0}, menor = 0, maior = 0, meio = 0;
    //loop para receber os números
    for (int i = 1; i <= 3; i++)
    {
        printf("DIGITE O %dº NÚMERO: ", i);
        scanf("%d", &num[i]);
    }
    //loop para calcular maior número
    for (int i = 1; i <= 3; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }
    }
    menor = maior;
    //loop para calcular menor número
    for (int i = 1; i <= 3; i++)
    {
        if (num[i] < menor)
        {
            menor = num[i];
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        if (num[i] != maior && num[i] != menor)
        {
            meio = num[i];
        }
    }
    printf("OS NÚMEROS EM ORDEM CRESCENTE FICARAM ASSIM: %d--%d--%d", menor, meio, maior);

    return 0;
}