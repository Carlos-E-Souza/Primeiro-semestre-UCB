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
    char frase[82];
    int espacos = 0, num_a = 0;
    //loop para receber dados
    printf("DIGITE UMA FRASE: ");
    fgets(frase, 81, stdin);
    for (int i = 0; i < 82; i++)
    {
        if (frase[i] == ' ')
        {
            espacos++;
        }
        else if (frase[i] == 'a' || frase[i] == 'A')
        {
            num_a++;
        }
    }
    printf("NESSA FRASE EXISTEM %d ESPAÇOS\n", espacos);
    printf("A LETRA 'A' OU 'a' APARECE %d VEZES\n", num_a - 5);
    return 0;
}