#include <iostream>
#include <locale.h>
#include <list>
#include <iomanip>

main()
{
    //para utilizar as funções dentro do namespace std sem a especificação em cada ocorrencia
    using namespace std;
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    char sexo;
    float nota, resultado_masculino = 0, res_final_mas, resultado_feminino = 0, res_final_fem;
    list<float> lista_alunos;
    list<float> lista_alunas;
    //loop
    while (nota >= 0)
    {
        cout << "Nota do aluno(a): ";
        cin >> nota;
        cout << "Sexo do aluno(M/F): ";
        cin >> sexo;

        if (nota < 0)
        {
            break;
        }
        if (sexo == 'm' || sexo == 'M')
        {
            lista_alunos.push_back(nota);
        }
        else if (sexo == 'f' || sexo == 'F')
        {
            lista_alunas.push_back(nota);
        }
    }
    //somando as notas dentro da lista
    for (list<float>::iterator it = lista_alunos.begin(); it != lista_alunos.end(); ++it)
    {
        resultado_masculino = resultado_masculino + (*it);
    }
    for (list<float>::iterator it = lista_alunas.begin(); it != lista_alunas.end(); ++it)
    {
        resultado_feminino = resultado_feminino + (*it);
    }

    res_final_fem = resultado_feminino / lista_alunas.size();
    res_final_mas = resultado_masculino / lista_alunos.size();
    cout << "A média dos alunos foi: " << setprecision(2) << res_final_mas << endl;
    cout << "E das alunas foi: " << setprecision(2) << res_final_fem << endl;

    return 0;
}