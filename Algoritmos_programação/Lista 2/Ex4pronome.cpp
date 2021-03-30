//Objetivo: Adicionar pronomes de tratamento com o nome da pessoa
//Entrada: Nome e sexo
//Saida: Nome com os pronomes de tratamento


#include<stdio.h>
#include<string>

main(){
//declaração de variaveis 
    char sexo;
    std::string nome; 
//comandos
    printf("Primiero nome: ");
    scanf("%s", &nome);
    printf("Sexo(M/F): ");
    scanf("%s", &sexo);
//condição
    if (sexo == 'm'){
        printf("Ilmo. Sr. %s", nome);
    }else{
        printf("Ilma. Sra. %s", nome);
    }
}