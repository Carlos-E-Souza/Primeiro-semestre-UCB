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
    int num[82];
    int numero, *ponteiro;
    //loop para preencher o array
    for (int i = 1; i <= 80; i++)
    {
        num[i] = i;
    }
    printf("DIGITE UM NÚMERO PARA VERIFICAR SE ELE ESTÁ NO ARRAY: ");
    scanf("%d", &numero);
    //loop para verificar se esta no array
    for (int i = 1; i <= 80; i++)
    {
        if (num[i] == numero)
        {
            ponteiro = &num[i];
            printf("O NÚMERO %d EXISTE NO ARRAY E ESTÁ NA POSIÇÃO %d E SEU ENDEREÇO É %d", numero, num[i], ponteiro);
            break;
        }
    }

    return 0;
}