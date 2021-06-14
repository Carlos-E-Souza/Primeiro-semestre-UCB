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
    float salarios[102], maior = 0, menor = 0, media = 0;
    int codigo[102], contagem = 0;
    //comandos
    printf("QUANTOS FUNCIONARIOS EXISTEM NESSA EMPRESA: ");
    scanf("%d", &contagem);
    fflush(stdin);
    //loop para receber dados
    for (int i = 1; i <= contagem; i++)
    {
        printf("DIGITE A %dº CÓDIGO FUNCIONAL: ", i);
        scanf("%d", &codigo[i]);
        fflush(stdin);
        printf("DIGITE O %dº SALÁRIO: ", i);
        scanf("%f", &salarios[i]);
        fflush(stdin);
        media += salarios[i];
        if (salarios[i] > maior)
        {
            maior = salarios[i];
        }
    }
    menor = salarios[1];
    //loop para achar menor salario
    for (int i = 1; i <= contagem; i++)
    {
        if (salarios[i] < menor)
        {
            menor = salarios[i];
        }
    }
    system("CLS");
    printf("O MAIOR SALÁRIO É: R$:%.2f\n", maior);
    printf("O MENOR SALÁRIO É: R$:%.2f\n", menor);
    printf("A MÉDIA SALÁRIAL É: R$:%.2f\n", media / contagem);

    return 0;
}