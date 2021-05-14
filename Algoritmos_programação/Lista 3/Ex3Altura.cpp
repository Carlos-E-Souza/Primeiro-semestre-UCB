#include <stdio.h>
#include <iostream>
#include <locale.h>

main()
{
    //terminal para portugues
    system("chcp65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    //declarando variaveis
    int alt_velha = 0;
    int alt_nova;
    int contagem = 10;
    //loop para determinar a maior altura
    while (contagem > 0)
    {
        printf("Digite a altura(cm): ");
        scanf("%d", &alt_nova);
        fflush(stdout);
        //condicional para verificar qual a maior altura
        if (alt_nova > alt_velha)
        {
            alt_velha = alt_nova;
        }
        contagem--;
    }

    std::cout << "A maior altura foi: " << alt_velha << "cm" << std::endl;

    return 0;
}