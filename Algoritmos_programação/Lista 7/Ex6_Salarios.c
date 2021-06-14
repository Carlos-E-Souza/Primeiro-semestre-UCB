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
    float salarios[102], maior = 0, menor = 0;
    int matriculas[102];
    //loop para receber dados
    for (int i = 1; i <= 100; i++)
    {
        printf("DIGITE A %dº MATRÍCULA: ", i);
        scanf("%d", &matriculas[i]);
        fflush(stdin);
        printf("DIGITE O %dº SALÁRIO: ", i);
        scanf("%f", &salarios[i]);
        fflush(stdin);
        if (salarios[i] > maior)
        {
            maior = salarios[i];
        }
    }
    menor = salarios[1];
    //loop para achar menor salario
    for (int i = 1; i <= 100; i++)
    {
        if (salarios[i] < menor)
        {
            menor = salarios[i];
        }
    }
    //loop para printar os salários
    for (int i = 1; i <= 100; i++)
    {
        printf("MATRÍCULA: %d // SALÁRIO R$:%.2f\n", matriculas[i], salarios[i]);
    }
    printf("O MAIOR SALÁRIO É: R$:%.2f\n", maior);
    printf("O MENOR SALÁRIO É: R$:%.2f\n", menor);

    return 0;
}