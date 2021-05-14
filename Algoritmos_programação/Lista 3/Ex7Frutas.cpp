#include <iostream>
#include <locale.h>
#include <list>
#include <iomanip>
#include <map>

int main()
{
    //para utilizar as funções dentro do namespace std sem a especificação em cada ocorrencia
    using namespace std;
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    map<int, string> identificacao = {
        {1, "abacaxi(s)"},
        {2, "maça(s)"},
        {3, "pera(s)"}};
    list<int> frutas;
    list<int> quantidade;
    list<int>::iterator it_quant = quantidade.begin();
    list<int>::iterator it_fruta = frutas.begin();
    int tipos_dif, fruta_escolhida, quantidade_fruta;
    //comandos
    cout << "Esta é a identificação para as frutas: \n 1 = abacaxi \n 2 = maça \n 3 = pera \n";
    cout << "Quantos tipos diferentes de frutas você vai querer? ";
    cin >> tipos_dif;
    int contagem = tipos_dif;
    //loop para pegar os dados com o cliente
    while (contagem > 0)
    {
        cout << "Qual fruta você vai querer(digite o número correspondente): ";
        cin >> fruta_escolhida;
        if (fruta_escolhida < 1 || fruta_escolhida > 3)
        {
            cout << "Essa fruta não esta no sistema por favor tente novamente";
            return 0;
        }
        else
        {
            frutas.push_back(fruta_escolhida);
            cout << "Quantidade dessa fruta: ";
            cin >> quantidade_fruta;
            quantidade.push_back(quantidade_fruta);
            contagem--;
        }
    }
    //verificação dos tipos diferentes de frutas escolhidas
    switch (tipos_dif)
    {
    case 1:
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << "Você escolheu: " << *it_quant << identificacao[*it_fruta];
        break;
    case 2:
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << "Você escolheu: " << *it_quant << " " << identificacao[*it_fruta];
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << " e " << *it_quant << " " << identificacao[*it_fruta];
        break;
    case 3:
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << "Você escolheu: " << *it_quant << " " << identificacao[*it_fruta];
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << " , " << *it_quant << " " << identificacao[*it_fruta];
        advance(it_quant, 1);
        advance(it_fruta, 1);
        cout << " e " << *it_quant << " " << identificacao[*it_fruta];
    }
    return 0;
}