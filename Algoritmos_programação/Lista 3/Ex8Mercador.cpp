#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <list>
#include <iomanip>
#include <string>

int main()
{
    //para utilizar as funções dentro do namespace std sem a especificação em cada ocorrencia
    using namespace std;
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int produtos_difer;
    float preco;
    string nome_produ;
    string linha(25, '-');
    //comandos
    cout << "Quantos produtos diferentes sua loja possui: ";
    cin >> produtos_difer;
    cin.ignore();
    //loop para adicionar e calcular o preço dos produtos
    while (produtos_difer > 0)
    {
        cout << linha << endl;
        cout << "Produto: ";
        getline(cin, nome_produ);
        cout << "Preço do produto: ";
        cin >> preco;
        cin.ignore();
        cout << "O novo preço do " << nome_produ << " é " << setprecision(2) << preco * 1.1 << endl;
        produtos_difer--;
    }

    return 0;
}