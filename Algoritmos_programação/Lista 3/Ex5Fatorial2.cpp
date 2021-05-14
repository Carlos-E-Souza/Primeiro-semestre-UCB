#include <stdio.h>
#include <iostream>
#include <locale.h>

int main()
{
    //para utilizar as funções dentro do namespace std sem a especificação em cada ocorrencia
    using namespace std;
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int num, prox_num;
    //comandos
    cout << "Digite um número: ";
    cin >> num;
    prox_num = num - 1;
    //loop para multiplicar e chegar ao fatorial
    while (prox_num > 0)
    {
        num = num * prox_num;
        prox_num--;
    }

    cout << "O fatorial do número fornecido é: " << num << endl;

    return 0;
}