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
    int num = 0, contagem = 0, resultado = 1;
    //comandos
    printf("DIGITE UM NÚMERO PARA CALCULAR O FATORIAL: ");
    scanf("%d", &num);
    contagem = num - 1;
    while (contagem > 0)
    {
        resultado = resultado * num * contagem;
        num -= 2;
        contagem -= 2;
    }
    printf("O FATORIAL É: %d", resultado);

    return 0;
}