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
    string linha(25, '-');
    char sexo;
    string cor_olhos, cor_cabelo;
    int idade, num_habitantes = 0;
    float porcentagem_especi;
    list<int> idades_habit, individuos_especiais;
    //loop para pegar os dados
    while (true)
    {
        cout << linha << endl;
        cout << "Idade do habitante: " << endl;
        cin >> idade;
        if (idade == -1)
        {
            cout << linha << endl;
            cout << "Esse foi o fim da pesquisa." << endl;
            cout << linha << endl;
            break;
        }
        idades_habit.push_back(idade);
        cout << "Sexo[M/F]: " << endl;
        cin >> sexo;
        cout << "Cor dos olhos: " << endl;
        cin >> cor_olhos;
        cout << "Cor do cabelo: " << endl;
        cin >> cor_cabelo;
        num_habitantes++;
        //condicional para filtrar as pessoas desejada
        if (sexo == 'F', 'f' && idade >= 18 && idade <= 35 && cor_olhos == "verde" && cor_cabelo == "loiro")
        {
            individuos_especiais.push_back(1);
        }
    }
    //condicional para verificar se possui alguem dentro dos individuos desejados
    if (individuos_especiais.size() > 0)
    {
        porcentagem_especi = (individuos_especiais.size() * 100) / num_habitantes;
        cout << "A porcentagem de indivíduos que se encaixam nas características é " << porcentagem_especi << "%";
    }

    return 0;
}