//Objetivo: Calcular quantos dias a pessoa viveu aproximadamente
//Entrada: Nome, ano de nascimento, ano atual
//Saida: Dias vividos

#include<stdio.h>
#include<locale.h>
#include<string>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declarando variaveis
    int nascimento, ano_atual, dias_vividos;
    std::string nome;
//comandos
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Em que ano você nasceu: ");
    scanf("%d", &nascimento);
    printf("Ano atual: ");
    scanf("%d", &ano_atual);
     
    dias_vividos = (ano_atual-nascimento) * 365;

    printf("Você viveu aproximadamente %d dias", dias_vividos);
}
