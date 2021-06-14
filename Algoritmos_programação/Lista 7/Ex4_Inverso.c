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
    char letras[32];
    //loop para receber as letras
    for (int i = 1; i <= 30; i++)
    {
        printf("DIGITE UMA LETRA: ");
        scanf("%c", &letras[i]);
        fflush(stdin);
    }
    printf("AS LETRAS NA ORDEM INVERSA FICAM:\n");
    for (int i = 30; i > 0; i--)
    {

        printf("%c-", letras[i]);
    }

    return 0;
}