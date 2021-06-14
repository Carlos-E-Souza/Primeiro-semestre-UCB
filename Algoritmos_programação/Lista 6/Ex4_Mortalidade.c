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
    char sexo;
    int meses = 0;
    float contagem = 0, nascidas = 0, mortes_menores = 0, mortes_mas = 0;
    //comandos
    printf("NÚMERO DE CRIANÇAS NASCIDAS: ");
    scanf("%f", &nascidas);
    fflush(stdin);
    while (true)
    {
        printf("SEXO[M|F]: ");
        scanf("%c", &sexo);
        fflush(stdin);
        if (sexo == 'v' || sexo == 'V')
        {
            break;
        }
        else if (sexo == 'm' || sexo == 'M')
        {
            mortes_mas++;
        }
        printf("MESES DE VIDA: ");
        scanf("%d", &meses);
        fflush(stdin);
        if (meses <= 24)
        {
            mortes_menores++;
        }

        contagem++;
    }
    printf("PORCENTAGEM DE CRIANÇAS MORTAS: %.2f\n", (contagem * 100) / nascidas);
    printf("PORCENTAGEM DE CRIANÇAS DO SEXO MASCULINO MORTAS: %.2f\n", (mortes_mas * 100) / nascidas);
    printf("PORCENTAGEM DE CRIANÇAS COM MENOS DE 24 MESES MORTAS: %.2f\n", (mortes_menores * 100) / nascidas);

    return 0;
}
