#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <list>

main()
{
    //terminal para portugues
    system("chcp65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int num1, num2;
    std::list<int> lista;
    int resultado = 0;
    //comandos
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    //loop para adicionar o número na lista quantas vezes forem necessarias
    for (int contagem = num1; contagem > 0; contagem--)
    {
        lista.push_back(num2);
    }
    //loop para somar os resultados na lista utilizando iterator para selecionar os elementos na lista
    for (std::list<int>::iterator it = lista.begin(); it != lista.end(); ++it)
    {
        resultado = resultado + (*it);
    }
    //print do resultado final
    std::cout << "O produto é: " << resultado << std::endl;

    return 0;
}