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
    float preco = 15, vendidos = 120;
    char linha[82] = "================================================================================";
    //comandos
    for (int i = 1; i <= 5; i++)
    {
        printf("%s\n", linha);
        printf("PREÇO A R$:%.2f ----> INGRESSOS VENDIDOS: %.0f ----> ", preco, vendidos);
        printf("LUCRO ESPERADO: R$:%.2f\n", preco * vendidos - 600);
        preco -= 3;
        vendidos += 26;
    }

    return 0;
}