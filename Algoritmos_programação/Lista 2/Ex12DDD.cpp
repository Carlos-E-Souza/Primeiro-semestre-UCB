//Objetivo: Informar de onde é o ddd
//Entrada: ddd de alguma cidade
//Saida: De qual cidade é esse ddd

#include<stdio.h>
#include<locale.h>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declaração de variaveis
    int ddd;
//comandos
    printf("Qual o DDD: ");
    scanf("%d", &ddd);
//condicional
    switch (ddd)
    {
    case 61:
        printf("Este ddd pertence a Brasília");
        break;
    case 71:
        printf("Este ddd pertence a Salvador");
        break;
    case 11:
        printf("Este ddd pertence a São Paulo");
        break;
    case 21:
        printf("Este ddd pertence a Rio de Janeiro");
        break;
    case 32:
        printf("Este ddd pertence a Juiz de Fora");
        break;
    case 19:
        printf("Este ddd pertence a Campinas");
        break;
    case 27:
        printf("Este ddd pertence a Vítoria");
        break;
    case 31:
        printf("Este ddd pertence a Belo Horizonte");
        break;
    default:
        printf("Cidade sem identificação");
        break;
    }
}