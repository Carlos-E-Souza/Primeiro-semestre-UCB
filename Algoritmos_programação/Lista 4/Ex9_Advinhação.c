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
    int num = 0, chutes = 0, chute = 0;
    //comandos
    printf("NÚMERO QUE SERÁ ADVINHADO: ");
    scanf("%d", &num);
    //loop até que o chute seja igual ao número
    while (num != chute)
    {
        printf("TENTATIVA: ");
        scanf("%d", &chute);
        chutes++;
    }

    printf("FORAM NECESSARIOS %d CHUTES PARA ACERTAR", chutes);

    return 0;
}