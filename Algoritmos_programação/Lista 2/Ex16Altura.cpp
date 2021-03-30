//Objetivo: Calcular o valor a pagar pela a internet
//Entrada: Horas usando a internet 
//Saida: Valor a ser pago

#include<stdio.h>
#include<locale.h>
#include<string>

main() {
//configurando terminal para português para usar acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");
//declarando variaveis
    std::string nome1, nome2, nome3;
    int altura1, altura2, altura3;
//comandos
    printf("Nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Altura da primeira pessoa: ");
    scanf("%d", &altura1);
    printf("Nome da segunda pessoa: ");
    scanf("%s", &nome2);
    printf("Altura da segunda pessoa: ");
    scanf("%d", &altura2);
    printf("Nome da terceira pessoa: ");
    scanf("%s", &nome3);
    printf("Altura da terceira pessoa: ");
    scanf("%d", &altura3);
//condicional
    if (altura1<altura2 and altura1<altura3){
        printf("A menor pessoa é a(o): %s com: %d", nome1, altura1);
    }if (altura2<altura1 and altura2<altura3){
        printf("A menor pessoa é a(o): %s com: %d", nome2, altura2);
    }if (altura3<altura1 and altura3<altura2){
        printf("A menor pessoa é a(o): %s com: %d", nome3, altura3);
    }
}