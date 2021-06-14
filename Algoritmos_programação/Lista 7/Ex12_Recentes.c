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
    int codigo[52], tempo[52], novos[5] = {10, 10, 10, 10}, contagem = 0, num = 0, primeiro, segundo, terceiro;
    //comandos
    printf("QUANTOS FUNCIONARIOS EXISTEM NESSA EMPRESA: ");
    scanf("%d", &contagem);
    fflush(stdin);
    //loop para receber dados
    for (int i = 1; i <= contagem; i++)
    {
        printf("DIGITE A %dº MATRÍCULA: ", i);
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        codigo[i] = num;
        fflush(stdin);

        printf("DIGITE O TEMPO DE EMPRESA EM MESES: ");
        scanf("%d", &tempo[i]);
        fflush(stdin);
    }

    //loop para achar o funcionario mais novo
    for (int i = 1; i <= contagem; i++)
    {
        if (tempo[i] < novos[1] && tempo[i] < novos[2] && tempo[i] < novos[3])
        {
            novos[1] = tempo[i];
            primeiro = codigo[i];
        }
    }
    //loop para achar o segundo funcionario mais novo
    for (int i = 1; i <= contagem; i++)
    {
        if (tempo[i] > novos[1] && tempo[i] <= novos[2] && tempo[i] < novos[3])
        {
            novos[2] = tempo[i];
            segundo = codigo[i];
        }
    }
    //loop para achar o terceiro funcionario mais novo
    for (int i = 1; i <= contagem; i++)
    {
        if (tempo[i] > novos[1] && tempo[i] > novos[2] && tempo[i] <= novos[3])
        {
            novos[3] = tempo[i];
            terceiro = codigo[i];
        }
    }
    printf("OS 3 FUNCIONARIOS MAIS NOVOS DA EMPRESA SÃO: %d-%d-%d", primeiro, segundo, terceiro);

    return 0;
}