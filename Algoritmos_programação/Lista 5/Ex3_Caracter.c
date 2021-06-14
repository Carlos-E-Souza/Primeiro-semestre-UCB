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
    int restos_octal[4] = {0, 0, 0, 0}, restos_hexa[4] = {0, 0, 0, 0};
    int hexa = 0, C = 0, resto = 0, a = 0, octal = 0;
    char letra;
    //loop
    while (true)
    {
        C = getch(); //função para pegar o caracter selecionado
        octal = C;
        //loop para calcular o octal
        for (int i = 3; i >= 1; i--)
        {
            resto = octal % 8;
            restos_octal[i] = resto;
            octal = octal / 8;
            if (octal <= 8)
            {
                a = i - 1;
                restos_octal[a] = octal;
                break;
            }
        }
        resto = 0;
        hexa = C;
        //loop para calcular o hexadecimal
        for (int i = 2; i >= 1; i--)
        {
            resto = hexa % 16;
            if (resto > 9)
            {
                switch (resto)
                {
                case 10:
                    resto = 65;
                    break;
                case 11:
                    resto = 66;
                    break;
                case 12:
                    resto = 67;
                    break;
                case 13:
                    resto = 68;
                    break;
                case 14:
                    resto = 69;
                    break;
                case 15:
                    resto = 70;
                    break;
                }
            }
            restos_hexa[i] = resto;
            hexa = hexa / 16;
            if (hexa <= 16)
            {
                a = i - 1;
                restos_hexa[a] = hexa;
                break;
            }
        }
        if (C >= 65 && C <= 122)
        {
            printf("CARACTER->%c\nDECIMAL->%d\nOCTAL->", C, C);
            for (int i = 1; i <= 3; i++)
            {
                printf("%d", restos_octal[i]);
            }
            printf("\nHEXADEC->");
            for (int i = 1; i <= 2; i++)
            {
                if (restos_hexa[i] > 9)
                {
                    printf("%c", restos_hexa[i]);
                }
                else
                {
                    printf("%d", restos_hexa[i]);
                }
            }
            printf("\n");
        }
        else if (C == 27)
        { //ESC == 27
            break;
        }
        else
        {
            printf("%c: ESTE CARACTER NÃO PODE SER USADO\n", C);
        }
        for (int i = 1; i <= 3; i++)
        {
            restos_octal[i] = 0;
            restos_hexa[i] = 0;
        }
    }

    return 0;
}