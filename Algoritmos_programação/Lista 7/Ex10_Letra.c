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
    char letras[100], letra;
    int contagem = 0;
    //loop para receber letras do nome
    while (true)
    {
        printf("%dº LETRA: ", contagem);
        scanf("%c", &letra);
        fflush(stdin);
        if (letra == '#')
        {
            break;
        }
        else
        {
            letras[contagem] = letra;
        }
        contagem++;
    }
    for (int i = 0; i < contagem; i++)
    {
        printf("%c", letras[i]);
    }

    return 0;
}