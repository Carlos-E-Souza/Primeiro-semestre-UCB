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
    int num, contador_num = 0;
    //loop que para quando forem digitados 100 números ou quando o número digitado for menor que 0
    while (contador_num < 100)
    {
        cout << "Digite um número: ";
        cin >> num;
        if (num < 0)
        {
            break;
        }
        contador_num++;
    }

    cout << "Foram digitados " << contador_num << " números";
}