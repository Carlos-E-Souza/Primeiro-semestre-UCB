#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //variaveis
    char opcao;
    char linha[34] = "================================";
    int pele = 0, maradona = 0, voto = 0, brancos = 0;
    //loop para receber votos
    while (true)
    {
        printf("%s\n", linha);
        printf("REALIZE SEU VOTO\n");
        printf("%s\n", linha);
        printf("25-PELÉ\n");
        printf("33-MARADORA\n");
        printf("0-EM BRANCO\n");
        printf("%s\n", linha);
        printf("NÚMERO CORRESPONDENTE: ");
        scanf("%d", &voto);
        if (voto == 7)
        {
            break;
        }
        fflush(stdin);
        printf("DESEJA MESMO VOTAR NO %d ?(S/N) ", voto);
        scanf("%c", &opcao);
        fflush(stdin);
        if (opcao == 'N' || opcao == 'n')
        {
            printf("VOTO CANCELADO\n");
            system("PAUSE");
            system("CLS");
            continue;
        }
        else
        {
            if (voto == 25)
            {
                printf("VOTO NO PELÉ CONFIRMADO\n");
                pele++;
                system("PAUSE");
                system("CLS");
            }
            else if (voto == 33)
            {
                printf("VOTO NO MARADONA CONFIRMADO\n");
                maradona++;
                system("PAUSE");
                system("CLS");
            }
            else if (voto == 0)
            {
                printf("VOTO EM BRANCO CONFIRMADO\n");
                brancos++;
                system("PAUSE");
                system("CLS");
            }
        }
    }
    printf("VOTOS NO PELÉ: %d\n", pele);
    printf("VOTOS NO MARADONA: %d\n", maradona);
    printf("VOTOS EM BRANCO: %d\n", brancos);
    //condicional para o vencedor
    if (pele > maradona)
    {
        printf("E O VENCEDOR FOI PELÉ");
    }
    else if (maradona > pele)
    {
        printf("E O VENCEDOR FOI MARADONA");
    }
    else
    {
        printf("OCORREU UM EMPATE");
    }

    return 0;
}