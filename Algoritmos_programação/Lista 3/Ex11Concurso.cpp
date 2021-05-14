#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    //para utilizar as funções dentro do namespace std sem a especificação em cada ocorrencia
    using namespace std;
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declrando variaveis
    int juizes = 0, nota = 0, nota2 = 0, nota3 = 0, maior = 0;
    int notas[3] = {0, 0, 0};
    string finalista1_nome;
    string finalista2_nome;
    string finalista3_nome;
    string linha(25, '-');
    //comandos
    system("CLS");
    cout << linha << endl;
    cout << "Quantos juízes participaram hoje: ";
    cin >> juizes;
    cin.ignore();
    cout << linha << endl;
    cout << "Nome do 1º finalista: " << endl;
    getline(cin, finalista1_nome);
    cout << "Nome do 2º finalista: " << endl;
    getline(cin, finalista2_nome);
    cout << "Nome do 3º finalista: " << endl;
    getline(cin, finalista3_nome);
    //loop para notas de cada finalista
    for (int finalistas = 0; finalistas < 3; finalistas++)
    {
        cout << linha << endl;
        cout << "Agora cada juiz insira sua nota para o finalista " << finalistas + 1 << endl;
        //loop para cada juiz inserir sua nota
        for (int i = 0; i < juizes; i++)
        {
            cout << "Nota " << i + 1 << ": ";
            cin >> nota;
            //condicional de verificação do input
            if (nota < 0 || nota > 100)
            {
                cout << "Nota tem que estar entre 0 e 100 tente novamente" << endl;
                cout << "Nota nova: ";
                cin >> nota;
            }
            notas[finalistas] += nota;
        }
    }
    //loop para descobrir a maior nota
    maior = notas[0];
    for (int i = 0; i < 3; i++)
    {
        if (notas[i] > maior)
        {
            maior = notas[i];
        }
    }

    cout << linha << endl;
    //condicional para saber quem foi o melhor avaliado pelos jurados
    if (maior == notas[0])
    {
        cout << "A maior nota foi: " << maior << " do(a) " << finalista1_nome << endl;
        cout << "Os outros participantes ficaram com: " << notas[1] << " e " << notas[2];
    }
    else if (maior == notas[1])
    {
        cout << "A maior nota foi: " << maior << " do(a) " << finalista2_nome << endl;
        cout << "Os outros participantes ficaram com: " << notas[0] << " e " << notas[2];
    }
    else if (maior == notas[2])
    {
        cout << "A maior nota foi: " << maior << " do(a) " << finalista3_nome << endl;
        cout << "Os outros participantes ficaram com: " << notas[0] << " e " << notas[1];
    }

    return 0;
}