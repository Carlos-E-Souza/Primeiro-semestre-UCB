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
    int dia, mes, ano;

    printf("Confira a data \n");
    printf("Dia: ");
    scanf("%d", &dia);
    //loop para não permitir dias que não existem
    while (dia < 1 || dia > 31)
    {
        printf("Dia tem que estar entre 1 e 31. Digite novamente \n");
        printf("Dia: ");
        scanf("%d", &dia);
    }

    printf("Mês(número): ");
    scanf("%d", &mes);
    //loop para não permitir meses que não existem
    while (mes < 1 || mes > 12)
    {
        printf("Mês tem que estar entre 1 e 12. Digite novamente \n");
        printf("Mês: ");
        scanf("%d", &mes);
    }
    //verifica se o mês é par para não poder receber 31 ou mais como dia
    if ((mes % 2) == 0)
    {
        while (dia > 30)
        {
            printf("Esse mês não pode ter mais de 30 dias. Digite o dia novamente \n");
            printf("Dia: ");
            scanf("%d", &dia);
        }
    }
    printf("Ano: ");
    scanf("%d", &ano);

    printf("A data final foi: %d/%d/%d e é válida.", dia, mes, ano);

    return 0;
}