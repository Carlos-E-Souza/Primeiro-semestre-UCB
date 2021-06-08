/*
Nome: Carlos Eduardo Souza
Matrícula: UC21102396
Curso: Engenharia de software
*/
//Bibliotecas importadas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define RED "\x1b[91m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"

int main()
{
    //Terminal para portugues
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("CLS");
    //Variaveis
    char linha[40] = "======================================";
    char destinos[100][28], pessoas[4], menores[4], assentos[4], posicao[4];
    char *destino;
    int assen_da_reser[200][201], assentos_disp[50][201], assentos_reser[50][201], assentos_confir[50][201];
    int id_reservas[200] = {0}, assentos_aviao[200] = {0};
    int id_reserva = 0, num_aviao = 0, confirmacao = 0, id_atual = 1, aviao = 0, id_temp = 0;
    float valor_final = 0;
    float valor_reser[200] = {0}, confirmados[200] = {0};
    //Loop "infinito" do menu principal
    while (true)
    {
        printf("\n%s\n", linha);
        printf(RED "BEM VINDO À SALUMAR LINHAS AEREAS\n" RESET);
        printf("%s\n", linha);
        printf("O QUE VOCÊ GOSTARIA DE FAZER ?\n");
        printf("1-REALIZAR RESERVA\n2-CONFIRMAR RESERVA\n3-CANCELAR RESERVA\n4-CONSULTAR STATUS AVIÃO\nESC-SAIR\n");
        printf("POR FAVOR APERTE O NÚMERO CORRESPONDENTE\n");
        int opcao_inicio;
        opcao_inicio = getch(); //função para pegar tecla pressionada
        if (opcao_inicio - 48 == 1)
        {
            system("CLS");
            printf("\n%s\n", linha);
            fflush(stdin);
            printf("DESTINO: ");
            fgets(destinos[id_atual], 27, stdin);
            printf("%s\n", linha);
            fflush(stdin);
            printf("QUANTAS PASSAGENS SÃO: ");
            fgets(pessoas, 4, stdin);
            //loop para realizar a verificação do input
            while (isalpha(pessoas[0]) != 0 || isalpha(pessoas[1]) != 0 || isalpha(pessoas[2]) != 0 ||
                   atoi(pessoas) < 1 || atoi(pessoas) > 200)
            {
                system("CLS");
                printf(RED "DIGITE UM VALOR VALIDO\n" RESET);
                printf("QUANTAS PASSAGENS SÃO: ");
                fgets(pessoas, 4, stdin);
            }
            printf("QUANTOS MENORES DE 5 ANOS(SE NÃO HOUVER NENHUM DIGITE 0): ");
            fgets(menores, 4, stdin);
            //loop para realizar a verificação do input
            while (isalpha(menores[0]) != 0 || isalpha(menores[1]) != 0 || isalpha(menores[2]) != 0 ||
                   atoi(menores) < 0 || atoi(menores) > atoi(pessoas))
            {
                system("CLS");
                printf(RED "VALOR INVÁLIDO, DIGITE OUTRO VALOR\n" RESET);
                printf("QUANTAS MENORES DE 5 ANOS SÃO: ");
                fgets(menores, 4, stdin);
            }
            valor_final = (atoi(pessoas) - atoi(menores)) * 1200 + atoi(menores) * 600;
            valor_reser[id_atual] = valor_final;
            printf("%s\n", linha);
            printf("O VALOR SERÁ R$:%.2f\n", valor_final);
            fflush(stdin);
            system("PAUSE");
            system("CLS");
            printf("%s\n", linha);
            fflush(stdin);
            printf("QUANTOS ASSENTOS EXISTEM NESSE AVIÃO: ");
            fgets(assentos, 4, stdin);
            //loop para realizar a verificação do input
            while (isalpha(assentos[0]) != 0 || isalpha(assentos[1]) != 0 || isalpha(assentos[2]) != 0 ||
                   atoi(assentos) < 90 || atoi(assentos) > 200)
            {
                system("CLS");
                printf(RED "DIGITE UM VALOR VALIDO\n" RESET);
                printf("QUANTOS ASSENTOS SÃO: ");
                fgets(assentos, 4, stdin);
            }
            //loop para deixar os destinos em letra minuscula
            for (int i = 0; i <= strlen(destinos[id_atual]); i++)
            {
                destinos[id_atual][i] = tolower(destinos[id_atual][i]);
            }
            assentos_aviao[id_atual] = atoi(assentos);
            destino = destinos[id_atual];
            system("CLS");
            //loop para comparar o destino atual com os que existem na lista para acessar o mesmo avião
            for (int i = 1; i <= 100; i++)
            { //condicional que compara os destinos
                if (strcmp(destino, destinos[i]) == 0)
                {
                    num_aviao = i;
                    //condicional verifica se o número de assentos do avião é o mesmo que o inserido anteriormente
                    if (atoi(assentos) != assentos_aviao[num_aviao])
                    {
                        printf(RED "ESTE NÚMERO ESTÁ ERRADO O AVIÃO %d POSSUI %d ASSENTOS\n" RESET, num_aviao, assentos_aviao[num_aviao]);
                        fflush(stdin);
                    }
                    break;
                }
                else
                {
                    num_aviao = id_atual;
                    assentos_aviao[num_aviao] = atoi(assentos);
                }
            }
            printf("%s\n", linha);
            printf("ESCOLHA OS ASSENTOS DESEJADOS\n");
            printf("%s\n", linha);
            printf(BLUE "C-ASSSENTOS CONFIRMADOS\n" RED "R-ASSENTOS RESERVADOS\n" GREEN "D-ASSENTOS DISPONIVEIS\n" RESET);
            printf("%s\n", linha);
            fflush(stdin);
            //loop para imprimir os assentos do avião
            for (int i = 1; i <= assentos_aviao[num_aviao]; i++)
            {
                assentos_disp[num_aviao][i] = i;
                //condicionais que verificam o status do assento
                if (assentos_confir[num_aviao][i] != 0)
                {
                    printf(BLUE "%d" RESET "--", assentos_confir[num_aviao][i]);
                    fflush(stdin);
                    continue;
                }
                else if (assentos_reser[num_aviao][i] == assentos_disp[num_aviao][i])
                {
                    printf(RED "%d" RESET "--", assentos_reser[num_aviao][i]);
                    fflush(stdin);
                    continue;
                }
                else
                {
                    printf(GREEN "%d" RESET "--", assentos_disp[num_aviao][i]);
                    fflush(stdin);
                    continue;
                }
            }
            printf("\n");
            //loop para receber os assentos desejados
            for (int i = 1; i <= atoi(pessoas); i++)
            {
                printf("%s\n", linha);
                printf("ESCOLHA O %dº ASSENTO: ", i);
                fflush(stdin);
                fgets(posicao, 4, stdin);
                //loop para verificação de input
                while (isalpha(posicao[0]) != 0 || isalpha(posicao[1]) != 0 || isalpha(posicao[2]) != 0 ||
                       atoi(posicao) < 1 || atoi(posicao) > assentos_aviao[num_aviao])
                {
                    system("CLS");
                    printf(RED "DIGITE UM VALOR VALIDO\n" RESET);
                    printf("ESCOLHA O %dº ASSENTO: ", i);
                    fflush(stdin);
                    fgets(posicao, 4, stdin);
                }
                assen_da_reser[id_atual][atoi(posicao)] = atoi(posicao);
                assentos_reser[num_aviao][atoi(posicao)] = atoi(posicao);
            }
            printf("%s\n", linha);
            printf("O ID DA SUA RESERVA É: %d\n", id_atual);
            fflush(stdin);
            printf(GREEN "OBRIGADO POR REALIZAR SUA RESERVA, AGUARDAMOS SUA CONFIRMAÇÃO!\n" RESET);
            id_reservas[id_atual] = id_atual;
            id_atual++;
            system("PAUSE");
            system("CLS");
        }
        else if (opcao_inicio - 48 == 2)
        {
            id_reserva = 0;
            system("CLS");
            printf("%s\n", linha);
            printf("DIGITE O ID DA RESERVA: ");
            scanf("%d", &id_reserva);
            //condicional para verificar se o id é existente
            if (id_reserva != id_reservas[id_reserva])
            {
                while (id_reserva != id_reservas[id_reserva])
                {
                    system("CLS");
                    printf(RED "ESTE ID NÃO EXISTE PORFAVOR TENTE NOVAMENTE\n" RESET);
                    printf("DIGITE O ID DA RESERVA: ");
                    scanf("%d", &id_reserva);
                    fflush(stdin);
                }
            }
            id_temp = id_reserva;
            printf("VALOR À SER PAGO R$:%.2f\n", valor_reser[id_reserva]);
            fflush(stdin);
            printf("DESEJA CONFIRMAR A RESERVA\nS-SIM\nN-NÃO\n");
            confirmacao = getch();
            if (confirmacao == 115 || confirmacao == 83)
            { //loop para comparar destinos e realizar modificações no mesmo avião
                for (int i = 1; i <= 100; i++)
                {
                    if (strcmp(destinos[i], destinos[id_reserva]) == 0)
                    {
                        id_reserva = i;
                        break;
                    }
                }
                printf("ASSENTOS RESERVADOS: ");
                //loop para verificar quais foram os assentos da reserva e adicionar nos assentos confirmados
                for (int assen = 1; assen <= 200; assen++)
                {
                    if (assen_da_reser[id_temp][assen] != 0)
                    {
                        assentos_confir[id_reserva][assen] = assen;
                        printf("%d ", assentos_confir[id_reserva][assen]);
                    }
                }
                confirmados[id_reserva] += valor_reser[id_temp];
                printf("\n");
                printf(BLUE "OBRIGADO POR CONFIRMAR SUA RESERVA!\n" RESET);
            }
            else if (confirmacao == 110 || confirmacao == 78)
            {
                printf(RED "TUDO BEM, ESPERAMOS POR SUA CONFIRMAÇÃO ATÉ 5 DIAS ANTES DO VOO\n" RESET);
            }
            system("PAUSE");
            system("CLS");
        }
        else if (opcao_inicio - 48 == 3)
        {
            id_reserva = 0;
            system("CLS");
            printf("%s\n", linha);
            printf("ID DA RESERVA QUE DESEJA CANCELAR: ");
            scanf("%d", &id_reserva);
            if (id_reserva != id_reservas[id_reserva])
            {
                while (id_reserva != id_reservas[id_reserva])
                {
                    system("CLS");
                    printf(RED "ESTE ID NÃO EXISTE PORFAVOR TENTE NOVAMENTE\n" RESET);
                    printf("DIGITE O ID DA RESERVA: ");
                    scanf("%d", &id_reserva);
                    fflush(stdin);
                }
            }
            printf("ASSENTOS DA RESERVA: ");
            for (int assen = 1; assen < 201; assen++)
            {
                if (assen_da_reser[id_reserva][assen] != 0)
                {
                    printf("%d ", assen_da_reser[id_reserva][assen]);
                }
            }
            printf("\n");
            fflush(stdin);
            printf("CONFIRMAR CANCELAMENTO\nS-SIM\nN-NÃO\n");
            confirmacao = getch();
            if (confirmacao == 115 || confirmacao == 83)
            {
                for (int assen = 1; assen <= 200; assen++)
                {
                    if (assen_da_reser[id_reserva][assen] != 0)
                    {
                        for (int i = 1; i <= 100; i++)
                        {
                            if (strcmp(destinos[i], destinos[id_reserva]) == 0)
                            {
                                id_temp = i;
                                break;
                            }
                        }
                        assentos_reser[id_temp][assen] = 0;
                    }
                }
                printf(RED "RESERVA CANCELADA!\n" RESET);
            }
            else if (confirmacao == 110 || confirmacao == 78)
            {
                printf(BLUE "SEM ALTERAÇÕES NA RESERVA\n" RESET);
            }
            system("PAUSE");
            system("CLS");
        }
        else if (opcao_inicio - 48 == 4)
        {
            system("CLS");
            printf("%s\n", linha);
            fflush(stdin);
            printf("DESTINO DO AVIÃO O QUAL DESEJA CONSULTAR O STATUS: ");
            fgets(destino, 27, stdin);
            printf("%s\n", linha);
            fflush(stdin);
            for (int i = 1; i <= 100; i++)
            {
                if (strcmp(destino, destinos[i]) == 0)
                {
                    aviao = i;
                    break;
                }
            }
            printf(BLUE "C-ASSSENTOS CONFIRMADOS\n" RED "R-ASSENTOS RESERVADOS\n" GREEN "D-ASSENTOS DISPONIVEIS\n" RESET);
            printf("%s\n", linha);
            fflush(stdin);
            for (int i = 1; i <= assentos_aviao[aviao]; i++)
            {
                assentos_disp[aviao][i] = i;
                if (assentos_confir[aviao][i] != 0)
                {
                    printf(BLUE "%d" RESET "--", assentos_confir[aviao][i]);
                    fflush(stdin);
                    continue;
                }
                else if (assentos_reser[aviao][i] == assentos_disp[aviao][i])
                {
                    printf(RED "%d" RESET "--", assentos_reser[aviao][i]);
                    fflush(stdin);
                    continue;
                }
                else
                {
                    printf(GREEN "%d" RESET "--", assentos_disp[aviao][i]);
                    fflush(stdin);
                    continue;
                }
            }
            printf("\n%s\n", linha);
            printf("O VALOR COM VENDAS DE PASSAGENS CONFIRMADAS ATÉ O MOMENTO É R$:%.2f\n", confirmados[aviao]);
            printf("%s\n", linha);
            fflush(stdin);
            system("PAUSE");
            system("CLS");
        }
        else if (opcao_inicio == 27)
        {
            break;
        }

        fflush(stdin);
    }
    return 0;
}
