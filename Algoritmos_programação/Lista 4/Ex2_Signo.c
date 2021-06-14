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
    //switch para cada mês
    switch (mes)
    {
    case 1:
        //condicionais para verificar o dia do mês
        if (dia < 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Capricórnio", dia, mes, ano);
        }
        else if (dia > 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Aquário", dia, mes, ano);
        }
        break;
    case 2:
        if (dia < 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Aquário", dia, mes, ano);
        }
        else if (dia > 19)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Peixes", dia, mes, ano);
        }
        break;
    case 3:
        if (dia < 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Peixes", dia, mes, ano);
        }
        else if (dia > 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Áries", dia, mes, ano);
        }
        break;
    case 4:
        if (dia < 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Áries", dia, mes, ano);
        }
        else if (dia > 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Touro", dia, mes, ano);
        }
        break;
    case 5:
        if (dia < 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Touro", dia, mes, ano);
        }
        else if (dia > 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Gêmeos", dia, mes, ano);
        }
        break;
    case 6:
        if (dia < 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Gêmeos", dia, mes, ano);
        }
        else if (dia > 20)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Câncer", dia, mes, ano);
        }
        break;
    case 7:
        if (dia < 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Câncer", dia, mes, ano);
        }
        else if (dia > 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Leão", dia, mes, ano);
        }
        break;
    case 8:
        if (dia < 23)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Leão", dia, mes, ano);
        }
        else if (dia > 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Virgem", dia, mes, ano);
        }
        break;
    case 9:
        if (dia < 23)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Virgem", dia, mes, ano);
        }
        else if (dia > 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Libra", dia, mes, ano);
        }
        break;
    case 10:
        if (dia < 23)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Libra", dia, mes, ano);
        }
        else if (dia > 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Escorpião", dia, mes, ano);
        }
        break;
    case 11:
        if (dia < 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Escorpião", dia, mes, ano);
        }
        else if (dia > 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Sagitário", dia, mes, ano);
        }
        break;
    case 12:
        if (dia < 22)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Sagitário", dia, mes, ano);
        }
        else if (dia > 21)
        {
            printf("A data final foi %d/%d/%d logo seu signo é Capricórnio", dia, mes, ano);
        }
        break;
    }

    return 0;
}