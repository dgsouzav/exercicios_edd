#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define maxEnd 3   //Maximo de enderecos por usuario.
#define maxTam 100

typedef struct sEndereco{
    char logradouro[100];
    int numero;
    char complemento[30];
    char bairro[30];
    int cep;
    char cidade[60];
}ENDERECO;

typedef struct sUsuario{
    char nome[100];
    int ddd;
    int tel;
    ENDERECO endereco[maxEnd];
    int contEnd;
}USER;

int menu(){
    int escolha;
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
    return escolha;
}

//SHIFT + ALT + A para comentar no Visual Code
int insert(USER usuarios[], int contUser){
    int controle;
    printf("===================== NOVO CADASTRO ====================\n");
    printf("Entre com as informacoes do novo usuario: \n");
    printf("NOME: ");
    scanf(" %[^\n]", usuarios[contUser].nome);

    printf("DDD: ");
    scanf("%d", &usuarios[contUser].ddd);

    printf("TELEFONE: ");
    scanf("%d", &usuarios[contUser].tel);

    for(int i = 0; i < maxEnd; i++){
        printf("=========== Endereco ===========\n");
        printf("LOGRADOURO: ");
        scanf(" %[^\n]", usuarios[contUser].endereco[i].logradouro);

        printf("NUMERO: ");
        scanf("%d", &usuarios[contUser].endereco[i].numero);

        printf("COMPLEMENTO: ");
        scanf(" %[^\n]", usuarios[contUser].endereco[i].complemento);

        printf("BAIRRO: ");
        scanf(" %[^\n]", usuarios[contUser].endereco[i].bairro);

        printf("CEP: ");
        scanf("%d", &usuarios[contUser].endereco[i].cep);

        printf("CIDADE: ");
        scanf(" %[^\n]", usuarios[contUser].endereco[i].cidade);
        
        usuarios[contUser].contEnd = i + 1;

        if( i < maxEnd - 1){
            printf("Digite 1 para cadastrar + 1 endereco ou zero pra encerrar: \n");
            scanf("%d", &controle);
            
            if(controle != 1)
                break;
        }
    }
    return 1;
}

int main(){
    USER usuarios[100];
 
    int escolha, contUser = 0, opEdit, controle;
    char nomeAux[100];

    do{
        escolha = menu();
        switch (escolha)
        {
        case 0:
            printf("Obrigado por utilizar o SisteMarques!\n");
            break;
        case 1:
            if(insert(usuarios, contUser) == 1){
                printf("CADASTRO REALIZADO COM SUCESSO!\n");
                contUser++;
            }else{
                printf("PROBLEMA: CADASTRO NAO CONCLUIDO!\n");
            }
            break;
        case 2:
            if(contUser == 0)
                printf("CADASTRO VAZIO!!!\n");
            else{
                for (int i = 0; i < contUser;i++)
                {

                    printf("===================== USUARIO %d ======================\n", i + 1);
                    printf("| NOME: %s\n", usuarios[i].nome);
                    printf("| TELEFONE: (%d) %d-%.4d\n", usuarios[i].ddd, usuarios[i].tel/10000, usuarios[i].tel%10000);
                    
                    for(int j = 0; j < usuarios[i].contEnd; j++){
                        printf("| LOGRADOURO: %s\n",  usuarios[i].endereco[j].logradouro);
                        printf("| NUMERO: %d\n",      usuarios[i].endereco[j].numero);
                        printf("| COMPLEMENTO: %s\n", usuarios[i].endereco[j].complemento);
                        printf("| BAIRRO: %s\n",      usuarios[i].endereco[j].bairro);
                        printf("| CEP: %d\n",         usuarios[i].endereco[j].cep);
                        printf("| CIDADE: %s\n",      usuarios[i].endereco[j].cidade);
                    }
                    printf("======================================================\n\n");
                }
            }
            break;
        case 3:
            if(contUser == 0)
                printf("CADASTRO VAZIO!!!\n");
            else{
                printf("===================== BUSCAR CADASTRO ===================\n");
                printf("Entre com o nome a ser verificado: ");
                scanf(" %[^\n]", nomeAux);
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(usuarios[i].nome, nomeAux) == 0){
                        printf("===================== USUARIO %d ======================\n", i + 1);
                        printf("| NOME: %s\n", usuarios[i].nome);
                        printf("| TELEFONE: (%d) %d-%.4d\n", usuarios[i].ddd, usuarios[i].tel/10000, usuarios[i].tel%10000);
                        printf("======================================================\n\n");
                        break;
                    }
                }
            }
            break;
        case 4:
            if(contUser == 0)
                printf("CADASTRO VAZIO!!!\n");
            else{
                printf("===================== EDITAR CADASTRO ===================\n");
                printf("Entre com o nome a ser editado: ");
                scanf(" %[^\n]", nomeAux);
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(usuarios[i].nome, nomeAux) == 0){
                        do{
                            printf("| 0 ........................................... SAIR |\n");
                            printf("| 1 .................................... EDITAR NOME |\n");
                            printf("| 2 ..................................... EDITAR DDD |\n");
                            printf("| 3 ................................ EDITAR TELEFONE |\n");
                            scanf("%d", &opEdit);

                            switch (opEdit)
                            {
                                case 0:
                                    break;
                                case 1:
                                    printf("NOME ATUAL: %s\n", usuarios[i].nome);
                                    printf("Digite o novo nome: \n");
                                    scanf(" %[^\n]", usuarios[i].nome);
                                    break;
                                case 2:
                                    printf("DDD ATUAL: %s\n", usuarios[i].ddd);
                                    printf("Digite o novo DDD: \n");
                                    scanf("%d", &usuarios[i].ddd);
                                    break;
                                case 3:
                                    printf("TELEFONE ATUAL: %s\n", usuarios[i].tel);
                                    printf("Digite o novo telefone: \n");
                                    scanf("%d", &usuarios[i].tel);
                                    break;
                                default:
                                    printf("Opcao invalida!\n");
                                    break;
                            }
                        }while(opEdit != 0);

                        break;
                    }
                }
            }
            break;
        case 5:
            if(contUser == 0)
                printf("CADASTRO VAZIO!!!\n");
            else{
                printf("===================== EXCLUIR CADASTRO ===================\n");
                printf("Entre com o nome a ser excluido: ");
                scanf(" %[^\n]", nomeAux);
                for (int i = 0; i < contUser; i++)
                {
                    if(strcmp(usuarios[i].nome, nomeAux) == 0){
                        strcpy(usuarios[i].nome, usuarios[contUser - 1].nome);
                        usuarios[i].ddd = usuarios[contUser - 1].ddd;
                        usuarios[i].tel = usuarios[contUser - 1].tel;

                        for(int j = 0; j < usuarios[contUser - 1].contEnd; j++){
                            strcpy(usuarios[i].endereco[j].logradouro, usuarios[contUser - 1].endereco[contUser  - 1].logradouro);
                            usuarios[i].endereco[j].numero = usuarios[contUser - 1].endereco[j].numero;
                            strcpy(usuarios[i].endereco[j].complemento, usuarios[contUser - 1].endereco[contUser  - 1].complemento);
                            strcpy(usuarios[i].endereco[j].bairro, usuarios[contUser - 1].endereco[contUser  - 1].bairro);
                            usuarios[i].endereco[j].cep = usuarios[contUser - 1].endereco[j].cep;
                            strcpy(usuarios[i].endereco[j].cidade, usuarios[contUser - 1].endereco[contUser  - 1].cidade);
                        }
                        usuarios[i].contEnd = usuarios[contUser - 1].contEnd;
                        contUser--;
                        printf("CADASTRO EXCLUIDO COM SUCESSO!!!\n");
                        break;
                    }
                }
            }
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