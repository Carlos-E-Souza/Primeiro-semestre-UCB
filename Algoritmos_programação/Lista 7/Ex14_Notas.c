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
    int frequencia[11] = {0}, contagem = 0, nota = 0;
    //comandos
    printf("QUANTOS ALUNOS EXISTEM NESSA TURMA: ");
    scanf("%d", &contagem);
    fflush(stdin);
    //loop para receber dados
    for (int i = 1; i <= contagem; i++)
    {
        printf("DIGITE A %dº NOTA: ", i);
        scanf("%d", &nota);
        fflush(stdin);
        for (int i = 0; i <= 10; i++)
        {
            if (nota == i)
            {
                frequencia[i]++;
            }
        }
    }
    for (int i = 0; i <= 10; i++)
    {
        if (frequencia[i] != 0)
        {
            printf("A NOTA %d APARECE %d VEZES\n", i, frequencia[i]);
        }
    }

    return 0;
}