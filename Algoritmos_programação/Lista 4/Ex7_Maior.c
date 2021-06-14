#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //variaveis
    char sexo;
    int altura = 0, maior = 0, menor = 200, media_fem = 0, alturas_fem = 0, fem = 0;
    //loop para receber os dados
    for (int i = 1; i <= 5; i++)
    {
        printf("SEXO[M/F]: ");
        scanf("%c", &sexo);
        printf("ALTURA(CM): ");
        scanf("%d", &altura);
        fflush(stdin);
        if (altura > maior)
        {
            maior = altura;
        }
        else if (altura < menor)
        {
            menor = altura;
        }
        if (sexo == 'F' || sexo == 'f')
        {
            alturas_fem += altura;
            fem++;
        }
    }

    media_fem = alturas_fem / fem;
    printf("A MAIOR ALTURA DO GRUPO FOI: %dcm\n", maior);
    printf("A MENOR ALTURA DO GRUPO FOI: %dcm\n", menor);
    printf("A MEDIA DE ALTURA DO SEXO FEMININO: %dcm\n", media_fem);

    return 0;
}