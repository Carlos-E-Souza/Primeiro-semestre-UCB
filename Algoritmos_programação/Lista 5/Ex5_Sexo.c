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
    //comandos
    printf("LETRA INICIAL DO SEU SEXO: ");
    scanf("%c", &sexo);
    sexo == 'm' || sexo == 'M' ? printf("MASCULINO") : printf("FEMININO");

    return 0;
}