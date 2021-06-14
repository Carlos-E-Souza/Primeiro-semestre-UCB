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
    int num1 = 0, num2 = 0, num = 0, contador = 0, contas[200];
    //comandos
    printf("NÚMERO 1: ");
    scanf("%d", &num1);
    printf("NÚMERO 2: ");
    scanf("%d", &num2);
    //condicional para trocar os valores inseridos para o num2 sempre ser o maior
    if (num1 > num2)
    {
        num = num2;
        num2 = num1;
        num1 = num;
    }
    //loop para verficar se o número é primo
    for (int a = num1; a <= num2; a++)
    {
        if (a < 10 && a % 2 == 1)
        {
            if (a != 9)
            {
                printf("-%d-", a);
                continue;
            }
        }
        //condicional número impar
        else if (a % 2 == 1)
        {
            for (int i = 2; i <= 9; i++)
            {
                //condicional para saber por quais números o número fornecido é divisivel
                if (a % i != 0)
                {
                    contador++;
                }
            }
            contas[a] = contador;
            contador = 0;
        }
        if (contas[a] != 8)
        {
            contas[a] = 0;
        }
        else if (contas[a] == 8)
        {
            printf("-%d-", a);
        }
    }
    return 0;
}