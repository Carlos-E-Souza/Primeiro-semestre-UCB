#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //variaveis
    int total_vinhos, option;
    float tintos, brancos, roses;
    //loop para menu interativo e receber dados
    while (true)
    {
        printf("ESCOLHE O QUE DESEJA FAZER\n");
        printf("T-VINHOS TINTOS\nB-VINHOS BRANCOS\nR-VINHO ROSE\nF-FIM\n");
        option = getch();
        if (option == 116 || option == 84)
        {
            printf("QUAL A PORCENTAGEM DE VINHOS TINTOS: ");
            scanf("%f", &tintos);
        }
        if (option == 98 || option == 66)
        {
            printf("QUAL A PORCENTAGEM DE VINHOS BRANCOS: ");
            scanf("%f", &brancos);
        }
        if (option == 114 || option == 82)
        {
            printf("QUAL A PORCENTAGEM DE VINHOS ROSES: ");
            scanf("%f", &roses);
        }
        if (option == 70 || option == 102)
        {
            break;
        }
    }
    return 0;
}