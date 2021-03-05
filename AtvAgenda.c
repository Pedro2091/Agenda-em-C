#include <stdio.h>
#include <string.h>

typedef struct Pessoa{
    int uuid;
    char nome[50];
    char telefone[25];
    char email[50];
    char dataDeNascimento[25];
    char observ[200];
}Pessoa;

//constante e funcoes
const int maximoDePessoas = 10;
const int maximoDeUUID = 500;
Pessoa adiciona();
    
main(){
    //agenda / espaços para pessoas
    Pessoa pessoa[maximoDePessoas];

    //variaves uteis
    int pessoasNaAgenda = 0;
    char op;
    int idGerados[maximoDeUUID];


    //percorre a agenda, limpa todo o lixo das variáveis e zera todos os códigos (UUDIs)
    for(int i=0; i<maximoDePessoas; i++){
        //memset define um valor para uma variavel para os primeiros caracteres definidos
        memset(&pessoa[i], NULL, sizeof(Pessoa));
    }


    //MENU
    while(op != '0'){
        //Menu
        system("cls");
        printf(" ______________________________________________________________\n");
        printf("|___________________________ AGENDA ___________________________|\n");
        printf("|                                                              |\n");
        printf("|       1- Cadastrar                                           |\n");
        printf("|       2- Listar                                              |\n");
        printf("|       3- Buscar                                              |\n");
        printf("|       4- Alterar                                             |\n");
        printf("|       5- Excluir                                             |\n");
        printf("|                                                              |\n");
        printf("|       0- SAIR                                                |\n");
        printf("|______________________________________________________________|\n");
        printf(" Opcao: ");    
        scanf(" %c",&op);

        switch(op){   
            case '0':
            system("cls");
            break;

            //CADASTRAR
            case '1':
                //Se a agenda estiver lotada
                if(pessoasNaAgenda >= maximoDePessoas){
                    system("cls");
                    printf(" ______________________________________________________________\n");
                    printf("|___________________________ AGENDA ___________________________|\n");
                    printf("|                                                              |\n");
                    printf("|                         Agenda cheia!                        |\n");
                    printf("|______________________________________________________________|\n");  
                    system("pause");
                }

                //percorre espaços da agenda
                for(int i=0; i<maximoDePessoas; i++){
                             
                    //se tem espaço na agenda
                    if(pessoa[i].uuid == 0){
                        
                        //gera o código unico (UUID) comparando o novo código com os já usados antes  
                        pessoa[i].uuid = 1;

                        for(int j=0; j<maximoDeUUID; j++){

                            while(pessoa[i].uuid == idGerados[j]){            
                                pessoa[i].uuid++;
                            }

                        }
                        //salva o uuid na lista de uuid ja usados
                        for(int j=0; j<maximoDeUUID; j++){
                            if(idGerados[j] == 0){
                                idGerados[j] = pessoa[i].uuid;
                                break;
                            }
                        }

                        pessoa[i] = adiciona(pessoa[i].uuid);
                        
                        pessoasNaAgenda++;

                        break;
                    }
                }
            break;
            
            case '2'://teste
            break;
            
            case '3':
            break;
            
            case '4':
            break;
            
            case '5':
            break;
            
            default:
                system("cls");
                printf(" ______________________________________________________________\n");
                printf("|___________________________ AGENDA ___________________________|\n");
                printf("|                                                              |\n");
                printf("|                  Selecione uma Opcao valida                  |\n");
                printf("|______________________________________________________________|\n"); 
                system("pause");
            break;
        }
    }

}

//adiciona abre a tela de leitura das informacoes e retorna uma Struct Pessoa para o Array de pessoas  
Pessoa adiciona(int _uuid){
    Pessoa temp;

    temp.uuid = _uuid;

    system("cls");
    printf(" ______________________________________________________________\n");
    printf("|_________________________ ADICIONAR __________________________|\n");
    printf("|                                                              |\n");
    printf("|                Digite o nome no campo abaixo                 |\n");
    printf("|______________________________________________________________|\n");   
    printf(" Nome: ");    
    scanf("%s",temp.nome);

    system("cls");
    printf(" ______________________________________________________________\n");
    printf("|_________________________ ADICIONAR __________________________|\n");
    printf("|                                                              |\n");
    printf("|              Digite o telefone no campo abaixo               |\n");
    printf("|______________________________________________________________|\n");   
    printf(" Telefone: ");    
    scanf("%s",temp.telefone);

    system("cls");
    printf(" ______________________________________________________________\n");
    printf("|_________________________ ADICIONAR __________________________|\n");
    printf("|                                                              |\n");
    printf("|                Digite a email no campo abaixo                |\n");
    printf("|______________________________________________________________|\n");   
    printf(" Email: ");    
    scanf("%s",temp.email);

    system("cls");
    printf(" ______________________________________________________________\n");
    printf("|_________________________ ADICIONAR __________________________|\n");
    printf("|                                                              |\n");
    printf("|          Digite a data de nascimento no campo abaixo         |\n");
    printf("|______________________________________________________________|\n");   
    printf(" Data: ");    
    scanf("%s",temp.dataDeNascimento);

    system("cls");
    printf(" ______________________________________________________________\n");
    printf("|_________________________ ADICIONAR __________________________|\n");
    printf("|                                                              |\n");
    printf("|           Digite alguma observacao no campo abaixo           |\n");
    printf("|______________________________________________________________|\n");   
    printf(" Observacao: ");    
    scanf("%s",temp.observ);

    return temp;
}
