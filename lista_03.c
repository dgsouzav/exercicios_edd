#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nome[100][100];
    int ddd[100];
    int tel[100];
    int escolha, contUser = 0;
    char nomeAux[100];
    int i;
    
    
    do{
        printf("======================== MENU ========================\n");
        printf("| 0 ........................................... SAIR |\n");
        printf("| 1 ...................................... ADICIONAR |\n");
        printf("| 2 ........................................ MOSTRAR |\n");
        printf("| 3 ...................................... PESQUISAR |\n");
        printf("| 4 ......................................... EDITAR |\n");
        printf("| 5 ........................................ EXCLUIR |\n");
        printf("| 6 .......................................... SOBRE |\n");
        printf("======================================================\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 0:
            printf("Obrigado por utilizar o SisteMarques!\n");
            break;
        case 1:
            printf("===================== NOVO CADASTRO ====================\n");
            printf("Entre com as informacoes do novo usuario: \n");
            printf("NOME: ");
            scanf(" %[^\n]", nome[contUser]);

            printf("DDD: ");
            scanf("%d", &ddd[contUser]);

            printf("TELEFONE: ");
            scanf("%d", &tel[contUser]);
            break;
        case 2:
            for ( i = 0; i < contUser;i++)
            {
                printf("===================== USUARIO %d ======================\n", i + 1);
                printf("| NOME: %s\n", nome[i]);
                printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                printf("======================================================\n\n");
            }
            break;
        case 3:
            printf("===================== BUSCAR CADASTRO ===================\n");
            printf("Entre com o nome a ser verificado: ");
            scanf(" %[^\n]", nomeAux);
            for ( i = 0; i < contUser; i++)
            {
                if(strcmp(nome[i], nomeAux) == 0){
                    printf("===================== USUARIO %d ======================\n", i + 1);
                    printf("| NOME: %s\n", nome[i]);
                    printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                    printf("======================================================\n\n");
                    break;
                }
            }
            break;
        case 4:
            printf("===================== EDITAR CADASTRO ===================\n");
            for ( i = 0; i < contUser; i++)
            {
                    printf("===================== USUARIO %d ======================\n", i + 1);
                    printf("| NOME: %s\n", nome[i]);
                    printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                    printf("======================================================\n\n");
            }
            int posicao;
            printf("Informe qual usu??rio deseja alterar: ");
            scanf(" %[^\n]", posicao);

            printf("NOME: ");
            scanf(" %[^\n]", nome[posicao - 1]);

            printf("DDD: ");
            scanf("%d", &ddd[posicao - 1]);

            printf("TELEFONE: ");
            scanf("%d", &tel[posicao - 1]);

            break;
        case 5:
            printf("===================== EXCLUIR CADASTRO ===================\n");
            for ( i = 0; i < contUser; i++)
            {
                    printf("===================== USUARIO %d ======================\n", i + 1);
                    printf("| NOME: %s\n", nome[i]);
                    printf("| TELEFONE: (%d) %d-%.4d\n", ddd[i], tel[i]/10000, tel[i]%10000);
                    printf("======================================================\n\n");
            }
            int posicao;
            printf("Informe qual usu??rio deseja excluir: ");
            scanf(" %[^\n]", posicao);

            nome[posicao - 1 ] = NULL;
            ddd[posicao - 1 ] = NULL;
            tel[posicao - 1 ] = NULL;
            break;
        case 6:
            printf("======================== SOBRE =======================\n");
            printf("| Este software foi desenvolvido para fins didaticos.|\n");
            printf("| AUTOR: Marques Sousa                               |\n");
            printf("| DATA: 01/09/2022                                   |\n");
            printf("======================================================\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }while(escolha != 0);

    return 0;
}
