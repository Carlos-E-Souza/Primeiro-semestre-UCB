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
    char sexo;
    int contagem = 1, maior = 0, menor = 300, altura = 0, num_fem = 0, num_mas = 0, media_fem = 0;
    //comandos
    while (contagem <= 10)
    {
        printf("DIGITE A %dº ALTURA(CM): ", contagem);
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
        printf("SEXO DA %dº PESSOA(M/F): ", contagem);
        scanf("%c", &sexo);
        fflush(stdin);
        if (sexo == 'F' || sexo == 'f')
        {
            num_fem++;
            media_fem += altura;
        }
        else if (sexo == 'M' || sexo == 'm')
        {
            num_mas++;
        }
        contagem++;
    }
    printf("A MAIOR ALTURA DO GRUPO FOI: %dcm\n", maior);
    printf("A MENOR ALTURA DO GRUPO FOI: %dcm\n", menor);
    printf("A MÉDIA DE ALTURA DAS MULHERES FOI: %dcm\n", media_fem / num_fem);
    printf("E HOUVERAM %d HOMENS", num_mas);

    return 0;
}