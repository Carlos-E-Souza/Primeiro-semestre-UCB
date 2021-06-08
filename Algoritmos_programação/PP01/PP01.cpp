/*
Nome: Carlos Eduardo Souza
Matrícula: UC21102396
Curso: Engenharia de software
*/
//Bibliotecas importadas
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#include <map>

int main()
{
    //declarando o uso do std para usar funções dentro do escopo sem a repetição do "std::"
    using namespace std;
    //configurando o terminal para portugues
    system("chcp 65001");
    system("CLS");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variáveis
    void MessageBoxSessoes(int MascDeMaior, int FemDeMaior);
    int MascDeMaior = 0, FemDeMaior = 0;
    int Sessoes, Genero_filme = 0, QuantPes_Filme = 0, Idade = 0, QuantMasc = 0, QuantFem = 0;
    int QuantCriancas = 0, QuantAdole = 0, QuantAdultos = 0, QuantIdosos = 0;
    char Sexo;
    string linha(30, '-');
    string Nome_filme;
    //dicionário para identificar um inteiro como string
    map<int, string> Identificacao_Generos = {
        {1, "ação"},
        {2, "aventura"},
        {3, "comédia"},
        {4, "drama"},
        {5, "suspense"},
        {6, "suspense"}};
    //loop para pegar a quantidade de sessões e fazer a verificação do input
    while (Sessoes != 2)
    {
        cout << "Quantas sessões do filme houveram: " << endl;
        cin >> Sessoes;
        //condicional para verificar se o tipo do input foi o mesmo da variavel declarada
        if (cin.fail())
        {
            cout << linha << endl;
            cout << "É preciso ser um número, tente novamente" << endl;
            cout << linha << endl;
            cin.clear(); //limpa o input inserido
            cin.sync();  //atribuo o valor vazio à variavel
            continue;
        }
        cin.ignore(); //função necessaria depois de qualquer "cin" usado antes do "getline()" para funcionamento correto
        //condicional para validar input
        if (Sessoes != 2)
        {
            cout << linha << endl;
            cout << "Só podem haver 2 sessões" << endl;
            cout << "Responda novamente com o número 2" << endl;
            system("PAUSE"); //função que aguarda o comando do usuario para continuar
            system("CLS");   //função que limpa o terminal para melhor vizualização
            cout << linha << endl;
        }
    }
    //loop para validar e registrar o nome do filme
    while (Nome_filme == "")
    {
        cout << linha << endl;
        cout << "Qual o nome do filme: " << endl;
        getline(cin, Nome_filme); //função para pegar a linha inteira do input assim aceitando espaços entre os nomes
                                  //condicional para validar input
        if (Nome_filme == "")
        {
            cout << linha << endl;
            cout << "Nome do filme não pode ser deixado em branco" << endl;
            system("PAUSE");
            system("CLS");
        }
    }
    //loop para pegar o gênero do filme e fazer sua validação
    while (Genero_filme < 1 || Genero_filme > 6)
    {
        cout << linha << endl;
        cout << " ação[1] \n aventura[2] \n comédia[3] \n drama[4] \n suspense[5] \n terror[6]" << endl;
        cout << linha << endl;
        cout << "Digite o número correspondente ao gênero do filme: " << endl;
        cin >> Genero_filme;
        //condicional para verificar se o tipo do input foi o mesmo da variavel
        if (cin.fail())
        {
            cout << linha << endl;
            cout << "É preciso ser um número" << endl;
            cin.clear();
            cin.sync();
            system("PAUSE");
            continue;
        }
        //condicional para validação do input
        if (Genero_filme < 1 || Genero_filme > 6)
        {
            cout << linha << endl;
            cout << "Valor inválido" << endl;
            cout << linha << endl;
            cout << "Digite novamente: " << endl;
            cin >> Genero_filme;
        }
    }

    cout << linha << endl;
    cout << "A seguir digite os dados de cada sessão" << endl;
    cout << linha << endl;
    //loop para receber os dados de cada sessão
    for (Sessoes = 2; Sessoes > 0; Sessoes--)
    {
        if (Sessoes == 1)
        {
            cout << linha << endl;
            cout << "Agora da segunda sessão" << endl;
            cout << linha << endl;
        }
        //loop para receber a quantidade de pessoas na sessão e validar o input
        while (QuantPes_Filme < 10)
        {
            cout << "Quantas pessoas assistiram ao filme: " << endl;
            cin >> QuantPes_Filme;
            //condicional para verificar se o tipo do input foi o mesmo da variavel
            if (cin.fail())
            {
                cin.clear();
                cin.sync();
                cout << linha << endl;
                cout << "É necessario inserir um número, tente novamente" << endl;
                cout << linha << endl;
                continue;
            }
            //condicional para verificação do input
            if (QuantPes_Filme < 10)
            {
                cout << linha << endl;
                cout << "A quantidade miníma são 10 pessoas" << endl;
                cout << "Por favor insira a quantidade novamente" << endl;
                system("PAUSE");
                system("CLS");
            }
        }
        cout << linha << endl;
        cout << "A seguir insira a idade e o sexo de cada pessoa que assistiu ao filme" << endl;
        //loop para receber a idade e o sexo de cada pessoas
        while (QuantPes_Filme > 0)
        {
            //loop para receber e validar a idade das pessoas
            while (Idade > 100 || Idade < 3)
            {
                cout << linha << endl;
                cout << "Idade: " << endl;
                cin >> Idade;
                //condicional para verificar se o tipo do input foi o mesmo da variavel
                if (cin.fail())
                {
                    cin.clear();
                    cin.sync();
                    cout << linha << endl;
                    cout << "A idade precisa ser um número" << endl;
                    continue;
                }
                //condicional que verifica o input da idade
                if (Idade > 100 || Idade < 3)
                {
                    cout << linha << endl;
                    cout << "A Idade mínima é 3 anos e a máxima 100" << endl;
                    cout << "Insira novamente" << endl;
                    system("PAUSE");
                    system("CLS");
                }
                else
                {
                    if (Idade <= 13)
                    {
                        QuantCriancas++;
                    }
                    if (Idade > 13 && Idade <= 17)
                    {
                        QuantAdole++;
                    }
                    if (Idade > 17 && Idade <= 64)
                    {
                        QuantAdultos++;
                    }
                    if (Idade > 64 && Idade <= 100)
                    {
                        QuantIdosos++;
                    }
                }
            }
            //loop para receber e validar o sexo de cada pessoa
            while (Sexo != 'M' && Sexo != 'F')
            {
                cout << "Sexo[M/F]: " << endl;
                cin >> Sexo;
                Sexo = toupper(Sexo);
                //condicional para verificar o input
                if (Sexo != 'M' && Sexo != 'F')
                {
                    cout << linha << endl;
                    cout << "Valor não aceito por favor tente novamente, apenas M ou F" << endl;
                    system("PAUSE");
                    system("CLS");
                }
                if (Sexo == 'M')
                {
                    QuantMasc++;
                }
                if (Sexo == 'F')
                {
                    QuantFem++;
                }
            }
            if (Idade > 17 && Sexo == 'M')
            {
                MascDeMaior++;
            }
            if (Idade > 17 && Sexo == 'F')
            {
                FemDeMaior++;
            }
            Sexo = 'a'; //resetando a variavel pois na próxima execução do loop ele estaria com dados antigos
            Idade = 0;  //resetando a variavel pois na próxima execução do loop ele estaria com dados antigos
            QuantPes_Filme--;
        }
        //chamando a função criada fora do escopo main()
        MessageBoxSessoes(MascDeMaior, FemDeMaior);
        MascDeMaior = 0, FemDeMaior = 0; //resetando a variavel pois na próxima execução do loop ele estaria com dados antigos
    }

    system("PAUSE");
    system("CLS");
    cout << "Nome do filme: " << Nome_filme << endl;
    cout << "Gênero do filme: " << Identificacao_Generos[Genero_filme] << endl;
    cout << "Pessoas do sexo feminino presentes: " << QuantFem << endl;
    cout << "Pessoas do sexo masculino presentes: " << QuantMasc << endl;
    cout << "Crianças: " << QuantCriancas << endl;
    cout << "Adolescentes: " << QuantAdole << endl;
    cout << "Adultos: " << QuantAdultos << endl;
    cout << "Idosos: " << QuantIdosos << endl;

    return 0;
}
//função do tipo void pois não retorna tipo específico e que recebe dois parametros do tipo inteiro
void MessageBoxSessoes(int MascDeMaior, int FemDeMaior)
{
    //transforma um inteiro em string
    std::string MascDeMaior_str = std::to_string(MascDeMaior);
    std::string FemDeMaior_str = std::to_string(FemDeMaior);
    //função cria uma caixa de mensagem
    MessageBox(
        NULL,
        ("Maiores de idade do sexo masculino: " + MascDeMaior_str + "\ne do sexo feminino: " + FemDeMaior_str).c_str(),
        "Sessoes",
        MB_OK);
}
