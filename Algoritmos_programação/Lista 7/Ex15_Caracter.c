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
    char caracteres[32], escolhido;
    int vezes = 0;
    //loop para receber dados
    for (int i = 1; i <= 30; i++)
    {
        printf("DIGITE UM CARACTER: ");
        scanf("%c", &caracteres[i]);
        fflush(stdin);
    }
    printf("DIGITE O CARACTER QUE DESEJA BUSCAR DENTRO DA LISTA: ");
    scanf("%c", &escolhido);
    fflush(stdin);
    //loop para encontrar caracter na lista
    for (int i = 1; i <= 30; i++)
    {
        if (escolhido == caracteres[i])
        {
            vezes++;
        }
    }
    printf("O CARACTER %c APARACE %d VEZES NA LISTA", escolhido, vezes);

    return 0;
}