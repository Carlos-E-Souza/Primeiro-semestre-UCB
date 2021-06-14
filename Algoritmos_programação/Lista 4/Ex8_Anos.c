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
    int altura_ana = 150, altura_felis = 110, anos = 0;
    //loop para calcular os anos necessarios
    while (altura_ana != altura_felis)
    {
        altura_ana += 2;
        altura_felis += 3;
        anos++;
    }
    printf("SERÃO NECESSARIOS %d ANOS PARA FELISBERTO ALCANÇAR ANACLETO", anos);
    return 0;
}