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
    float percentual = 0, num = 555, resultado = 0;
    //comandos
    printf("CALCULO DO PERCENTUAL DESEJADO SOBRE 555\n");
    printf("PERCENTUAL: ");
    scanf("%f", &percentual);
    resultado = (num * percentual) / 100;
    printf("O RESULTADO É %.2f", resultado);
    return 0;
}