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
    int medalhas_ouro[3] = {0, 0, 0};
    int medalhas_prata[3] = {0, 0, 0};
    int medalhas_bronze[3] = {0, 0, 0};
    int nota_final[3] = {0, 0, 0};
    char paises[3][50];
    //loop para receber os paises e suas notas
    for (int num_paises = 1; num_paises < 4; num_paises++)
    {
        printf("Nome do %dº país: ", num_paises);
        fgets(paises[num_paises], 49, stdin);
        fflush(stdin);
        printf("Medalhas de ouro do(a) %s->", paises[num_paises]);
        scanf("%d", &medalhas_ouro[num_paises]);
        printf("Medalhas de prata do(a) %s->", paises[num_paises]);
        scanf("%d", &medalhas_prata[num_paises]);
        printf("Medalhas de bronze do(a) %s->", paises[num_paises]);
        scanf("%d", &medalhas_bronze[num_paises]);
        fflush(stdin);
    }

    nota_final[1] = (medalhas_ouro[1] * 3) + (medalhas_prata[1] * 2) + (medalhas_bronze[1] * 1);
    nota_final[2] = (medalhas_ouro[2] * 3) + (medalhas_prata[2] * 2) + (medalhas_bronze[2] * 1);
    nota_final[3] = (medalhas_ouro[3] * 3) + (medalhas_prata[3] * 2) + (medalhas_bronze[3] * 1);
    //condicionais para decidir a classificação
    if (nota_final[1] > nota_final[2] && nota_final[1] > nota_final[3])
    {
        if (nota_final[2] > nota_final[3])
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[1], paises[2], paises[3]);
        }
        else
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[1], paises[3], paises[2]);
        }
    }
    else if (nota_final[2] > nota_final[1] && nota_final[2] > nota_final[3])
    {
        if (nota_final[1] > nota_final[3])
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[2], paises[1], paises[3]);
        }
        else
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[2], paises[3], paises[1]);
        }
    }
    else if (nota_final[3] > nota_final[1] && nota_final[3] > nota_final[2])
    {
        if (nota_final[1] > nota_final[2])
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[3], paises[1], paises[2]);
        }
        else
        {
            printf("Classificação:\n1º-%s\n2º-%s\n3º-%s", paises[3], paises[2], paises[1]);
        }
    }
    return 0;
}