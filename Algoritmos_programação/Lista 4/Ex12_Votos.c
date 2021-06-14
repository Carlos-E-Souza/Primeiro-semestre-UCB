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
    float votos[7] = {0, 0, 0, 0, 0, 0, 0}, confirmacao = 0, total_votos = 0;
    float porcentagem[7] = {0, 0, 0, 0, 0, 0, 0};
    int voto = 0;
    //loop para menu interativo e receber dados
    while (true)
    {
        printf("ESCOLHA SEU VOTO\n");
        printf("1-CANDIDATO 1\n2-CANDIDATO 2\n3-CANDIDATO 3\n4-CANDIDATO 4\n5-VOTO NULO\n6-VOTO EM BRANCO\nESC-PARA SAIR\n");
        confirmacao = getch();
        if (confirmacao == 27)
        {
            break;
        }
        voto = confirmacao - 48;
        votos[voto] += 1;
    }
    //loop para calcular total de votos
    for (int i = 1; i < 7; i++)
    {
        total_votos += votos[i];
    }
    //loop para calcular porcentagem de cada voto
    for (int i = 1; i < 7; i++)
    {
        porcentagem[i] = (votos[i] / total_votos) * 100;
    }
    //loop para imprimir as porcentagens
    for (int i = 1; i <= 4; i++)
    {
        printf("PORCENTAGEM DE VOTOS DO CANDIDATO %d: %.2f\n", i, porcentagem[i]);
    }
    printf("PORCENTAGEM DE VOTOS NULOS: %.2f\n", porcentagem[5]);
    printf("PORCENTAGEM DE VOTOS EM BRANCO: %.2f\n", porcentagem[6]);

    return 0;
}