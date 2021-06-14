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
    float precos_antigos[102], precos_novos[102], porcentagem;
    int opcao;
    //loop para receber dados
    for (int i = 1; i <= 100; i++)
    {
        printf("DIGITE O VALOR DO %dº CD: ", i);
        scanf("%f", &precos_antigos[i]);
        fflush(stdin);
    }
    printf("AUMENTAR:\n1-10%% DO VALOR\n2-VALOR ESPECÍFICO\n");
    printf("DIGITE O NÚMERO CORRESPONDENTE: ");
    scanf("%d", &opcao);
    fflush(stdin);
    if (opcao == 1)
    {
        for (int i = 1; i <= 100; i++)
        {
            precos_novos[i] = (precos_antigos[i] * 110) / 100;
        }
    }
    else if (opcao == 2)
    {
        printf("DIGITE A PORCENTAGEM PARA AUMENTAR OS PREÇOS: ");
        scanf("%f", &porcentagem);
        fflush(stdin);
        for (int i = 1; i <= 100; i++)
        {
            precos_novos[i] = (precos_antigos[i] * (100 + porcentagem)) / 100;
        }
    }
    //loop imprimir os preços antigos e novos
    for (int i = 1; i <= 100; i++)
    {
        printf("PREÇO ANTIGO DO %dº CD: %.2f || PREÇO NOVO: %.2f\n", i, precos_antigos[i], precos_novos[i]);
    }
    return 0;
}