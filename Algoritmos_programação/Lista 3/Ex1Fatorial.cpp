#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <list>

main()
{
    //terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int num, resultado;
    std::list<int> lista; //utiliza-se o std pois list está dentro do namespace std
    int res_final = 1;
    //comandos
    printf("Digite um número: ");
    scanf("%d", &num);
    //loop para os primeiros calculos do fatorial
    for (int contagem = num - 1; contagem > 0; contagem = contagem - 2)
    {
        resultado = (num - (num - contagem) + 1) * contagem;
        lista.push_back(resultado); //adicionando resultado à lista
    }
    //loop para multiplicar os resultados na lista
    for (std::list<int>::iterator it = lista.begin(); it != lista.end(); ++it)
    {
        res_final = res_final * (*it);
    }
    //print do resultado final
    std::cout << "O fatorial é: " << res_final << std::endl;

    return 0;
}